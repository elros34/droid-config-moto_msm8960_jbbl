#!/bin/bash
set -e

echo "$1"

# needed only in airplane mode
offline="$(connmanctl state | pcregrep -o1 'OfflineMode = (True|False)')"
echo "offline: $offline"
[ "$offline" == "False" ] && exit

[ -z $LOGNAME ] && LOGNAME="$(loginctl --no-legend list-users | awk '{print $2}' | head -n1)"

config_path="/home/$LOGNAME/.config"
if [ -z "$LOGNAME" ] || [ ! -d "$config_path" ]; then 
    echo "$LOGNAME is not available"
    [ -d "/home/defaultuser/.config" ] && config_path="/home/defaultuser/.config" || config_path="/home/nemo/.config"
fi

config="$config_path/.connman-technologies-control"
echo "using config: $config"

if [ "$1" == "load" ] && [ -f "$config" ]; then
    # started as root via systemd service
    for tech in wifi bluetooth gps; do
        enabled=$(pcregrep -o1 "$tech=(True|False)" $config)
        [ "$enabled" == "True" ] && connmanctl enable "$tech"
    done
    rm -f $config
elif [ "$1" == "save" ]; then 
    # started as user via photonq-helper
    /bin/rm -f $config
    techs="$(connmanctl technologies)"
    isTechEnabled() {
        # In 3.4.0.x gps powered state is always on (provided location is enabled) in online mode and off in offline mode
        if [ "$1" == "gps" ]; then
            [ "$(pcregrep -o1 '^enabled=(true|false)' /etc/location/location.conf)" == "true" ] && echo "True" || echo "False"
        else
            pcregrep -o1 "Type = $1 Powered = (True|False)" <<< $techs
        fi
    }
    for tech in wifi bluetooth gps; do
        echo $tech=$(isTechEnabled $tech) >> $config
    done
fi

exit 0




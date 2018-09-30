#!/bin/bash

echo "hdmi-switch.sh $1" | systemd-cat

if [ "$1" -eq 1 ]; then
    pacmd set-sink-port sink.primary output-aux_digital  
else
    HEADPHONES_CONNECTED="$(cat /sys/class/switch/h2w/state)"
    if [ "$HEADPHONES_CONNECTED" -gt 0 ]; then
        pacmd set-sink-port sink.primary output-wired_headphone
    else
        pacmd set-sink-port sink.primary output-speaker
    fi
fi 

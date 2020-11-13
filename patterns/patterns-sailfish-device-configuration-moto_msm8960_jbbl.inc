%package -n patterns-sailfish-device-configuration-moto_msm8960_jbbl
Summary: Jolla Configuration moto_msm8960_jbbl
Requires: patterns-sailfish-device-configuration-common
Requires: patterns-sailfish-device-adaptation-moto_msm8960_jbbl

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps
# Early stages of porting benefit from these:
Requires: patterns-sailfish-device-porter-tools

Requires: sailfish-content-graphics-z%{icon_res}

# For multi-SIM devices
#Requires: jolla-settings-networking-multisim

# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

# Introduced starting Sailfish OS 2.1.1.26
# Required for Jolla Store Access
Requires: patterns-sailfish-consumer-generic

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Sailfish OS CSD tool for hardware testing
# needs some configuration to get all features working

Requires: jolla-settings-system-flashlight
Requires: jolla-settings-system-nfc

# Pre-installed applications
Requires: sailfish-office
Requires: jolla-calculator
Requires: jolla-email
Requires: jolla-notes
Requires: jolla-clock
Requires: jolla-mediaplayer
Requires: jolla-calendar
Requires: sailfish-weather

%description -n patterns-sailfish-device-configuration-moto_msm8960_jbbl
Pattern with packages for moto_msm8960_jbbl configurations

%files -n patterns-sailfish-device-configuration-moto_msm8960_jbbl

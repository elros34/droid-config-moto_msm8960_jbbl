%package -n patterns-sailfish-device-configuration-moto_msm8960_jbbl
Summary: Jolla Configuration moto_msm8960_jbbl
Requires: patterns-sailfish-device-configuration-common-moto_msm8960_jbbl
Requires: patterns-sailfish-device-adaptation-moto_msm8960_jbbl

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps
# Early stages of porting benefit from these:
Requires: patterns-sailfish-rnd
# dev-tools pattern will be fixed in the next release
# for now we'll use its 'exploded' version:
#Requires: patterns-sailfish-dev-tools
Recommends: jolla-developer-mode
Recommends: strace
Recommends: gdb
Recommends: gdb-gdbserver
Requires: vim-enhanced
Requires: less
Recommends: lipstick-qt5-tools
Recommends: libhybris-tests
Requires: busybox-static
Requires: openssh-server
Requires: zypper
# sfos 4.0.1 use busybox bash/ash which is limited and cause hang for apps which use qprocess and are started in rpm's post/pre section (e.g. patchmanager2)
Requires: gnu-bash
# in sfos 4.0.1 /etc/profile.d/developer-profile.sh fails if busybox pidof is used
Recommends: psmisc-tools
# 'busybox ps' doesn't support -p switch
Recommends: procps-ng
# 'busybox mv' doesn't even show error when trying to overwrite same file
Recommends: gnu-coreutils
# 'busybox grep' have no exclude-dir support
Recommends: gnu-grep
# get rid of sp-rich-core which I have never really used
Provides: jolla-settings-crash-reporter

Requires: sailfish-content-graphics-z%{icon_res}


# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Recommends: jolla-settings-accounts-extensions-3rd-party-all

# Introduced starting Sailfish OS 2.1.1.26
# Required for Jolla Store Access
Requires: patterns-sailfish-consumer-generic

# For Mozilla location services (online)
Recommends: geoclue-provider-mlsdb

# Sailfish OS CSD tool for hardware testing
# needs some configuration to get all features working

Recommends: jolla-settings-system-flashlight
# does it even work?
Recommends: jolla-settings-system-nfc

# Pre-installed applications
Recommends: sailfish-office
Recommends: jolla-calculator
Recommends: jolla-email
Recommends: jolla-notes
Recommends: jolla-clock
Recommends: jolla-mediaplayer
Recommends: jolla-calendar
Recommends: sailfish-weather

# jolla-camera requires this booster, save some memory
Provides: mapplauncherd-booster-silica-qt5-media

%description -n patterns-sailfish-device-configuration-moto_msm8960_jbbl
Pattern with packages for moto_msm8960_jbbl configurations

%files -n patterns-sailfish-device-configuration-moto_msm8960_jbbl

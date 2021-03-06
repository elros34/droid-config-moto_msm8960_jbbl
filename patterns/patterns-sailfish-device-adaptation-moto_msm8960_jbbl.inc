%package -n patterns-sailfish-device-adaptation-moto_msm8960_jbbl
Summary: Jolla HW Adaptation moto_msm8960_jbbl
Requires: droid-hal-moto_msm8960_jbbl
Requires: droid-hal-moto_msm8960_jbbl-detritus
Requires: droid-hal-moto_msm8960_jbbl-img-boot
Requires: droid-hal-moto_msm8960_jbbl-kernel-modules
Requires: droid-config-moto_msm8960_jbbl-sailfish
Requires: droid-config-moto_msm8960_jbbl-pulseaudio-settings
Requires: droid-config-moto_msm8960_jbbl-policy-settings
Requires: droid-config-moto_msm8960_jbbl-preinit-plugin
Requires: droid-config-moto_msm8960_jbbl-flashing
Requires: droid-config-moto_msm8960_jbbl-bluez4
Requires: droid-hal-version-moto_msm8960_jbbl

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: qt5-feedback-haptics-ffmemless

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
Requires: gstreamer1.0-libav
# For devices with droidmedia and gst-droid built, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded

# Extra useful modes not officially supported:
# might need some configuration to get working
#Requires: usb-moded-mass-storage-android-config
# working but careful with roaming!
Requires: usb-moded-connection-sharing-android-config
# android diag mode only usable for certain android tools
#Requires: usb-moded-diag-mode-android
Provides: usb-moded-mass-storage-android-config

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-plugin-encsfa

# For GPS
Requires: geoclue-provider-hybris

# For FM radio on some QCOM devices
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

# NFC
Requires: nfcd-pn54x-plugin
Requires: nfcd-mce-plugin

# No device reset
Provides: jolla-settings-system-reset

# Tools
Requires: mce-tools
Requires: systemd-analyze
Requires: gstreamer1.0-droid-tools
Requires: gstreamer1.0-tools 
Requires: photonq-helper
Requires: harbour-storeman
Requires: patch
Requires: harbour-messwerk 
Requires: qt5-qtdeclarative-qmlscene
Requires: connman-tools
Requires: ncurses
Requires: rsync
Requires: nfcd-tools
Requires: csd

# For mounting SD card automatically
Requires: udisks2

# Bunch of dirty hacks
Requires: sfos-moto_msm8960_jbbl-adaptation


%description -n patterns-sailfish-device-adaptation-moto_msm8960_jbbl
Pattern with packages for moto_msm8960_jbbl HW Adaptation

%files -n patterns-sailfish-device-adaptation-moto_msm8960_jbbl

# These and other macros are documented in
# ../droid-configs-device/droid-configs.inc

%define device moto_msm8960_jbbl
%define vendor motorola

%define vendor_pretty Motorola
%define device_pretty Photon Q

%define dcd_path ./

# COmmunity HW adaptations need this
%define community_adaptation 1

# pixel_ratio will require experiments to get 4 app icons in a row,
# and 2x2 or 3x3 covers when up to 4 or 5+ apps are open respectively.
# For 4-5.5" device sizes, use these formulae as starting point:
# YourDevicePPI/Jolla1PPI (245) (e.g. for OnePlusX PPI 441/245 = 1.8)
# 4.5/DiagonalDisplaySizeInches * HorizontalDisplayResolution/540
%define pixel_ratio 1.0

# We assume most devices will
%define have_modem 1

# dropped bluez4 packaging
Provides: droid-config-%{device}-bluez4
Conflicts: droid-config-%{device}-bluez5
Provides: %{device}-bluez-configs

Requires: bluez
Conflicts: bluez5

Requires: bluez-libs
Conflicts: bluez5-libs

Requires: obexd
Conflicts: bluez5-obexd

Requires: obexd-server
# no obexd-server equivalent in BlueZ 5, so no conflict

Requires: kf5bluezqt-bluez4
Conflicts: kf5bluezqt-bluez5

Provides: bluez-configs
Conflicts: bluez5-configs
Obsoletes: bluez-configs-sailfish > 0.0.1
Obsoletes: bluez-configs-mer > 0.0.1

Requires: pulseaudio-modules-bluez4

%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-moto_msm8960_jbbl.inc
%include patterns/patterns-sailfish-device-configuration-moto_msm8960_jbbl.inc


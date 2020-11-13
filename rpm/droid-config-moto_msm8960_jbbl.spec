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

Provides: usb-moded-mass-storage-android-config

%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-moto_msm8960_jbbl.inc
%include patterns/patterns-sailfish-device-configuration-moto_msm8960_jbbl.inc


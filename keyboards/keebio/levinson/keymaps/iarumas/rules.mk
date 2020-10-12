#### Defaults for Levinson ####
# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = caterina

#### own configuration
COMMAND_ENABLE = no # override of Levinson default

SPLIT_KEYBOARD = yes
RGBLIGHT_ENABLE = yes
BACKLIGHT_ENABLE = yes

AUTO_SHIFT_ENABLE = no

MOUSEKEY_ENABLE = yes

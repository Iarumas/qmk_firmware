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

RGBLIGHT_ENABLE = no
BACKLIGHT_ENABLE = no

AUTO_SHIFT_ENABLE = yes

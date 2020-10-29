#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD21G18A__ 1

#define VENDOR_NAME "Watterott electronic"
#define PRODUCT_NAME "CO2-Ampel"
#define VOLUME_LABEL "CO2AMPEL"
#define INDEX_URL "http://www.watterott.com"
#define BOARD_ID "SAMD21G18A-CO2-Ampel-v0"

#define USB_VID 0x04D8
#define USB_PID 0xEACF // PID sublicensed from Microchip

#define LED_PIN PIN_PA27 // red LED

#endif

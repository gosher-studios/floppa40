// (c) gosher studios 2022 - licensed under cc by-nc-sa 4.0
#pragma once
#include "config_common.h"

// info
#define PRODUCT "Floppa40"
#define MANUFACTURER "Gosher Studios"
#define DEVICE_VER 0x0100
#define PRODUCT_ID 0xF140
#define VENDOR_ID 0xF109

// config
#define EE_HANDS
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define USB_VBUS_PIN GP19
#define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS, UNICODE_MODE_LINUX

// pins
#define MATRIX_ROWS 8
#define MATRIX_COLS 6
#define DIRECT_PINS { \
    { GP2, GP6, GP29, GP27, GP22, GP23 },     \
    { GP3, GP7, GP12, GP14, GP16, GP21 },     \
    { GP4, GP8, GP28, GP26, GP20, NO_PIN },   \
    { GP5, GP9, GP13, GP15, NO_PIN, NO_PIN }, \
}
#define DIRECT_PINS_RIGHT { \
    { GP4, GP7, GP12, GP27, GP21, GP20 },          \
    { GP5, GP29, GP28, GP15, GP23, NO_PIN },       \
    { GP6, GP8, GP13, GP14, GP26, GP22 },          \
    { GP9, GP16, NO_PIN, NO_PIN, NO_PIN, NO_PIN }, \
}

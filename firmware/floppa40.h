// (c) gosher studios 2022 - licensed under gplv3
#pragma once
#include "quantum.h"

// layout
#define ___ KC_NO
#define LAYOUT(L01, L02, L03, L04, L05, L06,    R01, R02, R03, R04, R05, R06,   \
               L07, L08, L09, L10, L11, L12,         R07, R08, R09, R10, R11,   \
               L13, L14, L15, L16, L17,         R12, R13, R14, R15, R16, R17,   \
               L18, L19, L20,           L21,    R18,                     R19) { \
    { L01, L02, L03, L04, L05, L06 }, \
    { L07, L08, L09, L10, L11, L12 }, \
    { L13, L14, L15, L16, L17, ___ }, \
    { L18, L19, L20, ___, ___, L21 }, \
    { R01, R02, R03, R04, R05, R06 }, \
    { ___, R07, R08, R09, R10, R11 }, \
    { R12, R13, R14, R15, R16, R17 }, \
    { R18, ___, ___, ___, ___, R19 }, \
}

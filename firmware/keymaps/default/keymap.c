// (c) gosher studios 2022 - licensed under gplv3
#include "floppa40.h"

#define CU_APRX UC(0x2248)
#define CU_DLTA UC(0x0394)
#define CU_SQRT UC(0x221A)
#define CU_UP   UC(0x2191)
#define CU_LEFT UC(0x2190)
#define CU_DOWN UC(0x2193)
#define CU_RGHT UC(0x2192)
#define CU_INBG UC(0x2049)
#define CU_BGBG UC(0x203C)
#define CU_STAR UC(0x2605)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	LAYOUT(
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,           KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                   KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,                    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
    KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,         KC_SPC,                                     MO(1)
	),
	LAYOUT(
		KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,          KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
    _______, _______, KC_UP,   KC_UP,   KC_BTN1, KC_BTN2,                KC_MS_U, KC_GRV,  KC_LBRC, KC_RBRC, _______,
    KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, _______,                KC_MS_L, KC_MS_D, KC_MS_R, KC_SCLN, KC_QUOT, KC_BSLS,
  	MO(2),   _______, _______,                   _______,       _______,                                     _______
	),
	LAYOUT(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,         KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  	CU_INBG, CU_BGBG, CU_UP,   CU_UP,   CU_APRX, CU_SQRT,                DM_REC1, DM_REC2, DM_RSTP, _______, _______,
    CU_STAR, CU_LEFT, CU_DOWN, CU_RGHT, CU_DLTA,                _______, DM_PLY1, DM_PLY2, _______, _______, _______,
    _______, _______, _______,                   _______,       _______,                                     _______
	)
};
// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _COLEMAK,
    _QWERTY,
    _GAMING,
    // _SOLIDWORKS,
    _CAPTUREONE,
    _LOWER,
    _RAISE,
    _MOUSE,
};

enum custom_keycodes {
    KC_PRVWD = QK_USER,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND
};

// #define KC_QWERTY PDF(_QWERTY)
#define KC_COLEMAK DF(_COLEMAK)
#define KC_QWERTY DF(_QWERTY)
#define KC_GAMING DF(_GAMING)
#define KC_CAPTUREONE DF(_CAPTUREONE)

// #define KC_SOLIDWORKS DF(_SOLIDWORKS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_COLEMAK] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL,
  KC_TAB,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                      KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_BSPC,
  KC_LSFT,  KC_A,   KC_R,    KC_S,    KC_T,    KC_G,                      KC_M,    KC_N,    KC_E,    KC_I,    KC_O,  KC_QUOT,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V, KC_MUTE,      KC_MEDIA_PLAY_PAUSE,KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH,  KC_CAPS,
                 KC_CAPS,KC_LGUI,KC_LALT,TL_LOWR, KC_SPC,        KC_ENT,  TL_UPPR, KC_BSPC, KC_RGUI, QK_BOOTLOADER
),
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT(
  _______,   _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______    ,            _______,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,KC_SCLN , KC_QUOT,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, _______,     _______,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                 _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),

[_GAMING] = LAYOUT(
  _______,   _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______    ,            _______,
  KC_T, KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
  KC_G, KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,                         KC_H,    KC_J,    KC_K,    KC_L,KC_SCLN , KC_QUOT,
  KC_B, KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,     _______,     _______,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                 _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),

// [_SOLIDWORKS] = LAYOUT(
//   _______, KC_F13, KC_7, KC_8, KC_9 , KC_F17,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
//   _______, KC_F14 , KC_4 ,KC_5 , KC_6 , KC_F18,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
//   _______, KC_F15 , KC_1  ,KC_2 , KC_3 , KC_F19,                           _______,  _______  , _______  ,  _______,  _______ ,_______,
//   _______, KC_F16 , KC_0 ,KC_DOT ,KC_ENTER , KC_F20,  _______ ,_______ ,                         _______,  _______  , _______,  _______ ,  _______ ,_______,
//                        _______,  _______, _______, _______, KC_ENTER,       _______, _______, _______, _______, _______
// ),

[_CAPTUREONE] = LAYOUT(
  _______, _______, _______, _______, _______ , _______,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
  _______, _______ , _______ , _______ , _______ , _______,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
  _______, _______ , _______  , _______ , _______ , _______,                           _______,  _______  , _______  ,  _______,  _______ ,_______,
  _______, _______ , _______ , _______ , _______ , _______,  _______ ,_______ ,                         _______,  _______  , _______,  _______ ,  _______ ,_______,
                       _______,  _______, _______, _______, _______,       _______, _______, _______, _______, _______
),

/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT(
  KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
    KC_GRV,   KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_F12,
    _______,   KC_1, KC_2, KC_3, KC_4, KC_5,                      KC_6, KC_7, KC_8, KC_9, KC_0, KC_PIPE,
    _______,   KC_GRAVE,KC_EQUAL, KC_MINUS, KC_PLUS, _______,  _______ ,_______ ,                    _______ , _______ , _______ , _______ ,KC_BSLS, _______,
                       _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),
/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE  |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT(
  _______, KC_COLEMAK, KC_QWERTY, KC_GAMING, _______ , _______,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
  _______, _______ , _______ , _______ , _______ , _______,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
  _______, KC_HOME , KC_END  , _______ , _______ , _______,                           KC_LEFT,  KC_DOWN  , KC_UP  ,  KC_RIGHT,  _______ ,_______,
  _______, _______ , _______ , _______ , _______ , _______,  _______ ,_______ ,                         _______,  _______  , _______,  _______ ,  _______ ,_______,
                       _______,  _______, _______, _______, _______,       _______, _______, _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | QK_BOOT|      |QWERTY|COLEMAK|      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |MACWIN|      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_MOUSE] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, MS_WHLU, MS_UP, MS_WHLD, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, MS_LEFT, MS_DOWN, MS_RGHT, XXXXXXX, XXXXXXX,
  MS_ACL2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, MS_BTN1, MS_BTN2, MS_BTN3, XXXXXXX, XXXXXXX,
                   _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
    }
    return true;
}

const uint16_t PROGMEM wf_underscore[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM rs_dash[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM xc_plus[] = {KC_X, KC_C, COMBO_END};

const uint16_t PROGMEM ar_backspace[] = {KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM zx_screenshot[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM qw_escape[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM st_enter[] = {KC_S, KC_T, COMBO_END};

const uint16_t PROGMEM cd_undo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM xcd_redo[] = {KC_X, KC_C, KC_D, COMBO_END};

const uint16_t PROGMEM pb_lbrace[] = {KC_P, KC_B, COMBO_END};
const uint16_t PROGMEM tg_lparen[] = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM dv_lbracket[] = {KC_D, KC_V, COMBO_END};
const uint16_t PROGMEM jl_rbrace[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM mn_rparen[] = {KC_M, KC_N, COMBO_END};
const uint16_t PROGMEM kh_rbracket[] = {KC_K, KC_H, COMBO_END};

const uint16_t PROGMEM num12_colemak[] = {KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM num23_qwerty[] = {KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM num34_gaming[] = {KC_3, KC_4, COMBO_END};
// const uint16_t PROGMEM num45_solidworks[] = {KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM num45_captureone[] = {KC_4, KC_5, COMBO_END};


combo_t key_combos[] = {
    COMBO(wf_underscore, KC_UNDS),
    COMBO(rs_dash, KC_MINS),
    COMBO(xc_plus, KC_PLUS),

    COMBO(ar_backspace, KC_BSPC),
    COMBO(zx_screenshot, KC_PSCR),
    COMBO(qw_escape, KC_ESC),
    COMBO(st_enter, KC_ENT),

    COMBO(cd_undo, LCTL(KC_Z)),
    COMBO(xcd_redo, LCTL(KC_Y)),

    COMBO(pb_lbrace, KC_LCBR),
    COMBO(tg_lparen, KC_LPRN),
    COMBO(dv_lbracket, KC_LBRC),
    COMBO(jl_rbrace, KC_RCBR),
    COMBO(mn_rparen, KC_RPRN),
    COMBO(kh_rbracket, KC_RBRC),
    
    COMBO(num12_colemak, KC_COLEMAK),
    COMBO(num23_qwerty, KC_QWERTY),
    COMBO(num34_gaming, KC_GAMING),
    COMBO(num45_captureone, KC_CAPTUREONE),
    // COMBO(num45_solidworks, KC_SOLIDWORKS),
};
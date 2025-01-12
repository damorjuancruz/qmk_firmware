#include QMK_KEYBOARD_H
#include "version.h"

#include "features/sentence_case.h"

#define MOON_LED_LEVEL LED_LEVEL

#define L_PINKY(KEY) MT(MOD_LGUI, KEY)
#define L_RING1(KEY) MT(MOD_LALT, KEY)
#define L_RING2(KEY) MT(MOD_RALT, KEY)
#define L_MIDDL(KEY) MT(MOD_LSFT, KEY)
#define L_INDEX(KEY) MT(MOD_LCTL, KEY)

#define R_PINKY(KEY) MT(MOD_RGUI, KEY)
#define R_RING1(KEY) MT(MOD_LALT, KEY)
#define R_RING2(KEY) MT(MOD_RALT, KEY)
#define R_MIDDL(KEY) MT(MOD_RSFT, KEY)
#define R_INDEX(KEY) MT(MOD_RCTL, KEY)

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    HSV_0_255_255,
    HSV_74_255_255,
    HSV_169_255_255,

    MT_LABK,
    MT_RABK,
    MT_LPRN,
    MT_RPRN,
    MT_LCBR,
    MT_RCBR,
    MT_CIRC,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_voyager(
        _______, _______      , _______      , _______      , _______        , _______         ,                   _______      , _______       , _______      , _______      , _______         , _______ ,
        KC_TAB , KC_Q         , L_RING2(KC_W), KC_E         , KC_R           , KC_T            ,                   KC_Y         , KC_U          , KC_I         , R_RING2(KC_O), KC_P            , KC_MINS ,
        CW_TOGG, L_PINKY(KC_A), L_RING1(KC_S), L_MIDDL(KC_D), L_INDEX(KC_F)  , KC_G            ,                   KC_H         , R_INDEX(KC_J) , R_MIDDL(KC_K), R_RING1(KC_L), R_PINKY(KC_SCLN), KC_QUOT ,
        _______, KC_Z         , KC_X         , KC_C         , KC_V           , KC_B            ,                   KC_N         , KC_M          , KC_COMM      , KC_DOT       , KC_SLSH         , KC_ENTER,
                                                              LT(1, KC_SPACE), LT(3, KC_ESCAPE),                   OSM(MOD_LSFT), LT(2, KC_BSPC)
    ),
    [1] = LAYOUT_voyager(
        _______, _______      , _______      , _______      , _______      , _______,                   _______ , _______      , _______      , _______          , _______      , _______,
        _______, KC_DOT       , L_RING2(KC_Y), KC_LPRN      , KC_RPRN      , KC_PERC,                   KC_COLN , KC_PLUS      , KC_MINUS     , R_RING2(KC_EQUAL), KC_W         , XXXXXXX,
        _______, L_PINKY(KC_6), L_RING1(KC_3), L_MIDDL(KC_1), L_INDEX(KC_2), KC_7   ,                   KC_9    , R_INDEX(KC_4), R_MIDDL(KC_0), R_RING1(KC_5)    , R_PINKY(KC_8), XXXXXXX,
        _______, RSFT(KC_G)   , KC_AT        , KC_J         , KC_K         , KC_DLR ,                   _______ , KC_ASTR      , KC_SLASH     , KC_LABK      , KC_RABK      , _______,
                                                              _______      , XXXXXXX,                   KC_SPACE, KC_BSPC
    ),
    [2] = LAYOUT_voyager(
        _______, _______         , _______          , _______          , _______         , _______ ,                   _______ , _______         , _______         , _______         , _______         , _______,
        _______, KC_HASH         , L_RING2(MT_CIRC) , KC_DLR           , KC_ASTR         , KC_QUOTE,                   KC_SCLN , KC_GRAVE        , KC_LBRC         , R_RING2(KC_RBRC), KC_PERC         , XXXXXXX,
        _______, L_PINKY(MT_LABK), L_RING1(KC_MINUS), L_MIDDL(KC_EQUAL), L_INDEX(MT_RABK), KC_COMMA,                   KC_DOT  , R_INDEX(MT_LPRN), R_MIDDL(MT_LCBR), R_RING1(MT_RCBR), R_PINKY(MT_RPRN), XXXXXXX,
        _______, RSFT(KC_AT)     , KC_UNDS          , KC_BSLS          , KC_TILD         , KC_MINUS,                   KC_SLASH, KC_EXLM         , KC_AMPR         , KC_PIPE         , KC_QUES         , _______,
                                                                         KC_SPACE        , KC_BSPC ,                   XXXXXXX , _______
    ),
    [3] = LAYOUT_voyager(
        RGB_TOG, RGB_MOD, RGB_VAD, RGB_VAI, EE_CLR , _______,                   _______, _______, _______, _______, _______, QK_BOOT,
        _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______, _______,
        _______, KC_MPRV, KC_MNXT, KC_MSTP, KC_MPLY, _______,                   KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,
        _______, _______, _______, HSV_0_255_255, HSV_74_255_255, HSV_169_255_255, _______, LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), _______, _______, _______,
                                            _______, _______,                   _______, _______
    ),
    [4] = LAYOUT_voyager(
        _______, KC_CAPS, KC_1, KC_2, KC_3  , KC_4   ,                   KC_6     , KC_7   , KC_8   , KC_9  , KC_0   , KC_MINS ,
        KC_T   , KC_TAB , KC_Q, KC_W, KC_E  , KC_R   ,                   KC_Y     , KC_U   , KC_F5  , KC_F6 , KC_P   , KC_RBRC ,
        KC_G   , KC_LSFT, KC_A, KC_S, KC_D  , KC_F   ,                   KC_H     , KC_J   , KC_K   , KC_L  , KC_COLN, KC_QUOT ,
        KC_B   , KC_LCTL, KC_Z, KC_X, KC_C  , KC_V   ,                   KC_N     , KC_M   , KC_COMM, KC_DOT, KC_SLSH, KC_ENTER,
                                      KC_SPC, KC_LALT,                   KC_ESCAPE, KC_BSPC
    ),
};

const uint16_t PROGMEM comboLayer4[] = { KC_TAB, KC_Q, COMBO_END };

combo_t key_combos[] = {
    COMBO(comboLayer4, TG(4))
};
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_sentence_case(keycode, record)) {
        return false;
    }

    switch (keycode) {
        case L_PINKY(MT_LABK):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_LABK);
                return false;
            }
            break;
        case L_INDEX(MT_RABK):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_RABK);
                return false;
            }
            break;
        case R_INDEX(MT_LPRN):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_LPRN);
                return false;
            }
            break;
        case R_PINKY(MT_RPRN):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_RPRN);
                return false;
            }
            break;
        case R_MIDDL(MT_LCBR):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_LCBR);
                return false;
            }
            break;
        case R_RING1(MT_RCBR):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_RCBR);
                return false;
            }
            break;
        case L_RING2(MT_CIRC):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_CIRC);
                return false;
            }
            break;

        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
        case HSV_0_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(0, 255, 255);
            }
            return false;
        case HSV_74_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(74, 255, 255);
            }
            return false;
        case HSV_169_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(169, 255, 255);
            }
            return false;
    }
    return true;
}

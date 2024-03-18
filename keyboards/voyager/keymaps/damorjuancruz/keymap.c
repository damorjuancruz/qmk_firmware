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
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_voyager(
        _______, _______      , _______      , _______      , _______        , _______  ,                   _______      , _______       , _______      , _______      , _______      , _______,
        CW_TOGG, KC_B         , L_RING2(KC_Y), KC_O         , KC_U           , KC_QUOTE ,                   KC_SCLN      , KC_L          , KC_D         , R_RING2(KC_W), KC_V         , KC_Z   ,
        KC_TAB , L_PINKY(KC_C), L_RING1(KC_I), L_MIDDL(KC_E), L_INDEX(KC_A)  , KC_COMMA ,                   KC_DOT       , R_INDEX(KC_H) , R_MIDDL(KC_T), R_RING1(KC_S), R_PINKY(KC_N), KC_Q   ,
        _______, KC_G         , KC_X         , KC_J         , KC_K           , KC_MINUS ,                   KC_SLASH     , KC_R          , KC_M         , KC_F         , KC_P         , _______,
                                                              LT(1, KC_SPACE), KC_ESCAPE,                   OSM(MOD_LSFT), LT(2, KC_BSPC)
    ),
    [1] = LAYOUT_voyager(
        _______, _______      , _______      , _______      , _______      , _______,                   _______ , _______      , _______      , _______      , _______      , _______,
        _______, KC_DOT       , L_RING2(KC_Y), KC_LPRN      , KC_RPRN      , KC_PERC,                   KC_COLN , KC_PLUS      , KC_MINUS     , R_RING2(KC_D), KC_W         , XXXXXXX,
        _______, L_PINKY(KC_6), L_RING1(KC_3), L_MIDDL(KC_1), L_INDEX(KC_2), KC_7   ,                   KC_9    , R_INDEX(KC_4), R_MIDDL(KC_0), R_RING1(KC_5), R_PINKY(KC_8), XXXXXXX,
        _______, RSFT(KC_G)   , KC_AT        , KC_J         , KC_K         , KC_DLR ,                   KC_SLASH, KC_ASTR      , KC_EQUAL     , KC_LABK      , KC_RABK      , _______,
                                                              _______      , XXXXXXX,                   KC_SPACE, KC_BSPC
    ),
    [2] = LAYOUT_voyager(
        _______, _______         , _______          , _______          , _______         , _______ ,                   _______ , _______         , _______         , _______         , _______         , _______,
        _______, KC_HASH         , L_RING2(KC_CIRC) , KC_DLR           , KC_ASTR         , KC_QUOTE,                   KC_SCLN , KC_GRAVE        , KC_LBRC         , R_RING2(KC_RBRC), KC_PERC         , XXXXXXX,
        _______, L_PINKY(MT_LABK), L_RING1(KC_MINUS), L_MIDDL(KC_EQUAL), L_INDEX(MT_RABK), KC_COMMA,                   KC_DOT  , R_INDEX(MT_LPRN), R_MIDDL(MT_LCBR), R_RING1(MT_RCBR), R_PINKY(MT_RPRN), XXXXXXX,
        _______, RSFT(KC_AT)     , KC_UNDS          , KC_BSLS          , KC_TILD         , KC_MINUS,                   KC_SLASH, KC_EXLM         , KC_AMPR         , KC_PIPE         , KC_QUES         , _______,
                                                                         KC_SPACE        , KC_BSPC ,                   XXXXXXX , _______
    ),
    [3] = LAYOUT_voyager(
        RGB_TOG, TOGGLE_LAYER_COLOR, RGB_MODE_FORWARD, RGB_SLD, RGB_VAD,
        RGB_VAI, _______, _______, _______, _______,
        _______, QK_BOOT, _______, _______,
        KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_AUDIO_MUTE, _______,
        KC_PAGE_UP, KC_HOME, KC_UP, KC_END, _______, _______,
        _______, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_MEDIA_STOP,
        KC_MEDIA_PLAY_PAUSE, _______, KC_PGDN, KC_LEFT, KC_DOWN,
        KC_RIGHT, _______, _______, _______,
        _______, _______, HSV_0_255_255, HSV_74_255_255,
        HSV_169_255_255, _______, LCTL(LSFT(KC_TAB)), LCTL(KC_TAB),
        _______, _______, _______, _______,
        _______, _______, _______),
};

const uint16_t PROGMEM combo00[] = { L_RING2(KC_Y), KC_O         , KC_U         , COMBO_END };
const uint16_t PROGMEM combo01[] = { L_RING1(KC_I), L_MIDDL(KC_E), L_INDEX(KC_A), COMBO_END };
const uint16_t PROGMEM combo02[] = { KC_B         , L_RING2(KC_Y), KC_O         , COMBO_END };

const uint16_t PROGMEM combo10[] = { L_RING2(KC_Y), KC_LPRN      , KC_RPRN      , COMBO_END };
const uint16_t PROGMEM combo11[] = { L_RING1(KC_3), L_MIDDL(KC_1), L_INDEX(KC_2), COMBO_END };
const uint16_t PROGMEM combo12[] = { KC_DOT       , L_RING2(KC_Y), KC_LPRN      , COMBO_END };

const uint16_t PROGMEM combo20[] = { L_RING2(KC_CIRC) , KC_DLR           , KC_ASTR         , COMBO_END };
const uint16_t PROGMEM combo21[] = { L_RING1(KC_MINUS), L_MIDDL(KC_EQUAL), L_INDEX(KC_RABK), COMBO_END };
const uint16_t PROGMEM combo22[] = { KC_HASH          , L_RING2(KC_CIRC) , KC_DLR          , COMBO_END };

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo00, KC_TAB), COMBO(combo01, KC_ENTER),  COMBO(combo02, KC_ESCAPE),
    COMBO(combo10, KC_TAB), COMBO(combo11, KC_ENTER),  COMBO(combo12, KC_ESCAPE),
    COMBO(combo20, KC_TAB), COMBO(combo21, KC_ENTER),  COMBO(combo22, KC_ESCAPE),
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

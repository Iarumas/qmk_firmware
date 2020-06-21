#include QMK_KEYBOARD_H
#include "neo2-layout.h"

#define LAYOUT_levinson_wrapper(...) LAYOUT_ortho_4x12(__VA_ARGS__)

enum my_keycodes {
  NEO = 0,
  SYM,
  NUM,
  FUN,
  QTZ
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { \


   /* ┌─────┬─────┬─────┬─────┬─────┬─────┐ ┌─────┬─────┬─────┬─────┬─────┬─────┐
    * │ ESC │     │     │     │     │     │ │     │     │     │     │     │ BS  │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │ CTRL│     │     │     │     │     │ │     │     │     │     │     │ RET │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │SH_( │     │     │     │     │     │ │     │     │     │     │     │SH_) │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │CTRL │ GUI │ ALT │     | SPC │ SPC │ │ SPC │ SPC │     │     │     │     │
    * └─────┴─────┴─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┴─────┴─────┘
    */
[NEO] = LAYOUT_levinson_wrapper( \
  KC_ESC,                 NEO_LEFT_01,                                 NEO_RIGHT_01,                 NE_SS, \
  MO(SYM),                NEO_LEFT_02,                                 NEO_RIGHT_02,                 LT(SYM,NE_Y), \
  KC_LSPO,                NEO_LEFT_03,                                 NEO_RIGHT_03,                 KC_RSPC, \
  KC_LCTRL, KC_LGUI, KC_LALT, MO(FUN), MO(NUM), KC_SPC,  KC_SPC,  MO(NUM), MO(FUN), KC_RALT, KC_RGUI, KC_RCTRL \
),



   /* ┌─────┬─────┬─────┬─────┬─────┬─────┐ ┌─────┬─────┬─────┬─────┬─────┬─────┐
    * │     │     │     │     │     │     │ │     │     │     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     │     │     │ │     │     │     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     │     │     │ │     │     │     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     |     │     │ │     │     │     │     │     │     │
    * └─────┴─────┴─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┴─────┴─────┘
    */
[SYM] = LAYOUT_levinson_wrapper( \
  _______,      SYM_LEFT_01,                   SYM_RIGHT_01,      _______, \
  _______,      SYM_LEFT_02,                   SYM_RIGHT_02,      _______, \
  _______,      SYM_LEFT_03,                   SYM_RIGHT_03,      _______, \
  _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______ \
),


   /* ┌─────┬─────┬─────┬─────┬─────┬─────┐ ┌─────┬─────┬─────┬─────┬─────┬─────┐
    * │     │     │     │     │     │     │ │     │     │     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     │     │     │ │     │     │     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     │     │     │ │     │     │     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     |     │     │ │     │  0  │     │     │     │     │
    * └─────┴─────┴─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┴─────┴─────┘
    */
[NUM] = LAYOUT_levinson_wrapper( \
  _______,      NUM_LEFT_01,                   NUM_RIGHT_01,      _______, \
  _______,      NUM_LEFT_02,                   NUM_RIGHT_02,      _______, \
  _______,      NUM_LEFT_03,                   NUM_RIGHT_03,      _______, \
  _______, _______, _______, _______, _______, _______,   _______, KC_KP_0, _______, _______, _______, _______ \
),


   /* ┌─────┬─────┬─────┬─────┬─────┬─────┐ ┌─────┬─────┬─────┬─────┬─────┬─────┐
    * │     │     │     │     │     │     │ │     │     │     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     │     │     │ │     │     │     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     │     │     │ │     │     │     │     │     │     │
    * ├─────┼─────┼─────┼─────┼─────┼─────┤ ├─────┼─────┼─────┼─────┼─────┼─────┤
    * │     │     │     │     |     │     │ │     │     │     │     │     │     │
    * └─────┴─────┴─────┴─────┴─────┴─────┘ └─────┴─────┴─────┴─────┴─────┴─────┘
    */
[FUN] = LAYOUT_levinson_wrapper( \
  _______,      FUN_LEFT_01,                   FUN_RIGHT_01,      _______, \
  _______,      FUN_LEFT_02,                   FUN_RIGHT_02,      _______, \
  _______,      FUN_LEFT_03,                   FUN_RIGHT_03,      _______, \
  _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______ \
),


[QTZ] = LAYOUT_levinson_wrapper( \
  _______,      QTZ_LEFT_01,                   QTZ_RIGHT_01,      _______, \
  _______,      QTZ_LEFT_02,                   QTZ_RIGHT_02,      _______, \
  _______,      QTZ_LEFT_03,                   QTZ_RIGHT_03,      _______, \
  _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______ \
),

};


#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_dvorak[][2]     = SONG(DVORAK_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case NEO:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        persistent_default_layer_set(1UL<<NEO);
      }
      return false;
      break;
    case SYM:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_colemak);
        #endif
        persistent_default_layer_set(1UL<<SYM);
      }
      return false;
      break;
    case NUM:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_dvorak);
        #endif
        persistent_default_layer_set(1UL<<NUM);
      }
      return false;
      break;
    case FUN:
          if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_dvorak);
        #endif
        persistent_default_layer_set(1UL<<NUM);
      }
      return false;
      break;
/*
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
*/
  }
  return true;
}

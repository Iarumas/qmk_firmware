
#ifndef NEO2_LAYOUT_H
#define NEO2_LAYOUT_H

#include "keymap_neo2.h"
#include "keymap_german.h"
#include "neo2-keycodes.h"

    /*
     * ┌───┬───┬───┬───┬───┐		┌───┬───┬───┬───┬───┐
     * │ x │ v │ l │ c │ w │		│ k │ h │ g │ f │ q │  
     * ├───┼───┼───┼───┼───┤		├───┼───┼───┼───┼───┤
     * │ u │ i │ a │ e │ o │		│ s │ n │ r │ t │ d │
     * ├───┼───┼───┼───┼───┤		├───┼───┼───┼───┼───┤
     * │ ü │ ö │ ä │ p │ z │		│ b │ m │ , │ . │ j │
     * └───┴───┴───┴───┴───┘		└───┴───┴───┴───┴───┘
     */
#define NEO_LEFT_01		NE_X,		NE_V,		NE_L,		NE_C,		NE_W
#define NEO_LEFT_02		NE_U,		NE_I,		NE_A,		NE_E,		NE_O
#define NEO_LEFT_03		NE_UDIA, 	NE_ODIA, 	NE_ADIA,	NE_P,		NE_Z
#define NEO_RIGHT_01	NE_K,		NE_H,		NE_G,		NE_F,		NE_Q
#define NEO_RIGHT_02 	NE_S,		NE_N,		NE_R,		NE_T,		NE_D
#define NEO_RIGHT_03	NE_B,		NE_M,		NE_COMM,	NE_DOT,		NE_J


    /*
     * ┌───┬───┬───┬───┬───┐		┌───┬───┬───┬───┬───┐
     * │ … │ _ │ [ │ ] │ ^ │		│ ! │ < │ > │ = │ & │
     * ├───┼───┼───┼───┼───┤		├───┼───┼───┼───┼───┤
     * │ \ │ / │ { │ } │ * │		│ ? │ ( │ ) │ - │ : │
     * ├───┼───┼───┼───┼───┤		├───┼───┼───┼───┼───┤
     * │ # │ $ │ | │ ~ │ ` │		│ + │ % │ " │ ' │ ; │
     * └───┴───┴───┴───┴───┘		└───┴───┴───┴───┴───┘
     */
#define SYM_LEFT_01  N_DOTS,  N_USC,   N_LSQBR, N_RSQBR, N_CIRC
#define SYM_LEFT_02  N_BSLS,  N_SLSH,  N_LCUBR, N_RCUBR, N_ASTR
#define SYM_LEFT_03  N_HASH,  N_DLR,   N_PIPE,  N_TILD,  N_GRAVE
#define SYM_RIGHT_01 N_EXKL,  N_LT,    N_GT,    N_EQ,    N_AMP
#define SYM_RIGHT_02 N_QUES,  N_LPARN, N_RPARN, N_MINS,  N_AT
#define SYM_RIGHT_03 N_PLUS,  N_PERC,  N_QUOT,  N_SING,  N_DEGRE


    /*
     * ┌───┬───┬───┬───┬───┐		┌───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T │		│ Z │ U │ I │ O │ P │
     * ├───┼───┼───┼───┼───┤		├───┼───┼───┼───┼───┤
     * │ A │ S │ D │ F │ G │		│ H │ J │ K │ L │ Ö │
     * ├───┼───┼───┼───┼───┤		├───┼───┼───┼───┼───┤
     * │ < │ Y │ X │ C │ V │		│ B │ N │ M │ , │ . │
     * └───┴───┴───┴───┴───┘		└───┴───┴───┴───┴───┘
     */
#define QTZ_LEFT_01  DE_Q,		DE_W,	DE_E,	DE_R,		DE_T
#define QTZ_LEFT_02  DE_A,		DE_S,	DE_D,	DE_F,		DE_G
#define QTZ_LEFT_03	 DE_LABK,	DE_Y,	DE_X,	DE_C,		DE_V
#define QTZ_RIGHT_01 DE_Z,		DE_U,	DE_I,	DE_O,		DE_P
#define QTZ_RIGHT_02 DE_H,		DE_J,	DE_K,	DE_L,		DE_ODIA
#define	QTZ_RIGHT_03 DE_B,		DE_N,	DE_M,	DE_COMM,	DE_DOT


    /*
     * ┌───┬───┬───┬───┬───┐		┌───┬───┬───┬───┬───┐
     * │PUP│BS │UP │DEL│PDO│		│ / │ 7 │ 8 │ 9 │ - │
     * ├───┼───┼───┼───┼───┤		├───┼───┼───┼───┼───┤
     * │HM │LFT│DWN│RGT│END│		│ * │ 4 │ 5 │ 6 │ + │
     * ├───┼───┼───┼───┼───┤		├───┼───┼───┼───┼───┤
     * │ESC│TAB│INS│ENT│UND│		│ENT│ 1 │ 2 │ 3 │ , │
     * └───┴───┴───┴───┴───┘		└───┴───┴───┴───┴───┘
     */
#define NUM_LEFT_01  KC_PGUP,   KC_BSPC, KC_UP,   KC_DEL,   KC_PGDN
#define NUM_LEFT_02  KC_HOME,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_END
#define NUM_LEFT_03  KC_ESC,    KC_TAB,  KC_INS,  KC_ENTER, N_UNDO
#define NUM_RIGHT_01 KC_KP_SLASH,    KC_KP_7, KC_KP_8, KC_KP_9,  KC_KP_MINUS
#define NUM_RIGHT_02 KC_KP_ASTERISK, KC_KP_4, KC_KP_5, KC_KP_6,  KC_KP_PLUS
#define NUM_RIGHT_03 KC_KP_ENTER,    KC_KP_1, KC_KP_2, KC_KP_3,  KC_KP_DOT


    /*
     * ┌───┬───┬───┬───┬───┐		┌───┬───┬───┬───┬───┐
     * │F1 │F2 │F3 │F4 │   │		│   │   │   │   │   │
     * ├───┼───┼───┼───┼───┤		├───┼───┼───┼───┼───┤
     * │F5 │F6 │F7 │F8 │   │		│   │   │   │   │   │
     * ├───┼───┼───┼───┼───┤		├───┼───┼───┼───┼───┤
     * │F9 │F10|F11│F12│   │		│   │   │   │   │   │
     * └───┴───┴───┴───┴───┘		└───┴───┴───┴───┴───┘
     */
#define FUN_LEFT_01  KC_F1,   KC_F2,   KC_F3,   KC_F4,          KC_ASDN // wieder raus
#define FUN_LEFT_02  KC_F5,   KC_F6,   KC_F7,   KC_F8,          KC_ASUP // wieder raus
#define FUN_LEFT_03  KC_F9,   KC_F10,  KC_F11,  KC_F12,         KC_ASRP // wieder raus
#define FUN_RIGHT_01  _______,	_______, _______,   _______,   _______
#define FUN_RIGHT_02  _______,	_______, _______,   _______,   _______
#define FUN_RIGHT_03  _______,	_______, _______,   _______,   _______

#endif

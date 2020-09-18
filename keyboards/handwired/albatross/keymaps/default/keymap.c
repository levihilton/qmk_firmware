#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 // default layer
#define GAME 1 // gaming layer
#define SYMB 2 // symbol layer
#define MOVE 3 // movement layer
#define NUMP 4 // number pad layer
#define MDIA 5 // media layer

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // ensure these codes start after the highest keycode defined in Quantum
  VRSN,
};

//BASE TEMPLATE
/* Keymap N: Template Layer
 *
 * ,-------------------------------------------------------.                 ,-------------------------------------------------------.
 * | BASE |      |      |      |      |      |      |      |                 |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |                 |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |                 |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |                 |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------.   ,------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |      |      |
 * `------------------------------------------------+------+------|   |------+------+------------------------------------------------'
 *                                                  |      |      |   |      |      |
 *                                                  `-------------'   `-------------'
 */
/*
[TEMP] = LAYOUT_albatross(
 TO(BASE),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                                                   KC_NO,   KC_NO,      KC_NO,   KC_NO
),
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,-------------------------------------------------------.                 ,-------------------------------------------------------.
 * |  ESC |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                 |  F7  |  F8  |  F9  | F10  | F11  | F12  |      | GAME |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |   `  |   1  |   2  |   3  |   4  |   5  |   6  |                 |  5   |  6   |  7   |  8   |  9   |  0   |  -   |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |   Q  |   W  |   E  |   R  |   T  | MOVE |                 | MOVE |  Y   |  U   |  I   |  O   |  P   |  \   |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |   A  |   S  |   D  |   F  |   G  | SYMB |                 | SYMB |  H   |  J   |  K   |  L   |  ;   |  '   |      |
 * |------+------+------+------+------+------+------+------+------.   ,------+------+------+------+------+------+------+------+------|
 * |      |LSHIFT|   Z  |   X  |   C  |   V  |   B  | LWIN | CAPS |   | CAPS | DEL  |  N   |  M   |  ,   |  .   |  /   |RSHIFT|      |
 * |------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
 * | SWAP |      | NUMP | MDIA | LALT | LCTL | BSPC |  TAB |  DEL |   | LWIN | ENT  | SPC  | RCTL | RALT | MDIA | NUMP |      | SWAP |
 * `------------------------------------------------+------+------|   |------+------+------------------------------------------------'
 *                                                  |  SPC |  ENT |   | TAB  | BSPC |
 *                                                  `-------------'   `-------------'
 */
[BASE] = LAYOUT_albatross(  // layer 0 : default
   KC_ESC,   KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,   KC_NO,TG(GAME),
    KC_NO,  KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                         KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,
    KC_NO,   KC_NO,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,TT(MOVE),                     TT(MOVE),    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,   KC_NO,
    KC_NO,   KC_NO,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,TT(SYMB),                     TT(SYMB),    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,   KC_NO,
    KC_NO, KC_LSPO,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LWIN, KC_CAPS,    KC_CAPS,  KC_DEL,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSPC,   KC_NO,
    SH_TG,   KC_NO,TT(NUMP),TT(MDIA), KC_LALT, KC_LCTL, KC_BSPC,  KC_TAB,  KC_DEL,    KC_LWIN,  KC_ENT,  KC_SPC, KC_RCTL, KC_RALT,TT(MDIA),TT(NUMP),   KC_NO,   SH_TG,
                                                                  KC_SPC,  KC_ENT,     KC_TAB, KC_BSPC
),
/* Keymap 1: Gaming Level
 *
 * ,-------------------------------------------------------.                 ,-------------------------------------------------------.
 * |  ESC |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                 |  F7  |  F8  |  F9  | F10  | F11  | F12  |      | GAME |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |   `  |   1  |   2  |   3  |   4  |   5  |   6  |                 |  5   |  6   |  7   |  8   |  9   |  0   |  -   |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |  TAB |   Q  |   W  |   E  |   R  |   T  |                 |      |  Y   |  U   |  I   |  O   |  P   |  \   |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      | LSFT |   A  |   S  |   D  |   F  |   G  |                 |      |  H   |  J   |  K   |  L   |  ;   |  '   |      |
 * |------+------+------+------+------+------+------+------+------.   ,------+------+------+------+------+------+------+------+------|
 * |      |      | LSFT |   Z  |   X  |   C  |   V  |   B  | CAPS |   | CAPS | DEL  |  N   |  M   |  ,   |  .   |  /   |RSHIFT|      |
 * |------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
 * | SWAP |      |      |      | LALT | LCTL |  SPC |  TAB |  DEL |   | LWIN | ENT  | SPC  | RCTL | RALT |      |      |      | SWAP |
 * `------------------------------------------------+------+------|   |------+------+------------------------------------------------'
 *                                                  | BSPC |  ENT |   | TAB  | BSPC |
 *                                                  `-------------'   `-------------'
 */
[GAME] = LAYOUT_albatross(
   KC_ESC,   KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO,TG(GAME),
    KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO,
    KC_NO,   KC_NO,  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO,
    KC_NO,   KC_NO, KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                        KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO,
    KC_NO,   KC_NO, KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RSFT,   KC_NO,
    SH_TG,   KC_NO,   KC_NO,   KC_NO, KC_TRNS, KC_TRNS,  KC_SPC, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   SH_TG,
                                                                 KC_BSPC,  KC_TRNS,    KC_TRNS, KC_TRNS
),
/* Keymap 2: SYMBOLS
`{}_=
 *#[]-\{}_=<>./
 n<>./
 * ,-------------------------------------------------------.                 ,-------------------------------------------------------.
 * | BASE |      |      |      |      |      |      |      |                 |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |                 |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |  EQL | UNDS | LCBR | RCBR |  GRV |      |                 |      | GRV  | LCBR | RCBR | UNDS | EQL  |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      | BSLS | MINS | LBRC | RBRC |      | SYMB |                 | SYMB |      | LBRC | RBRC | MINS | BSLS |      |      |
 * |------+------+------+------+------+------+------+------+------.   ,------+------+------+------+------+------+------+------+------|
 * |      |      | PIPE | PLUS |  LT  |  GT  |      |      |      |   |      |      |      |  LT  |  GT  | PLUS | PIPE |      |      |
 * |------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |      |      |
 * `------------------------------------------------+------+------|   |------+------+------------------------------------------------'
 *                                                  |      |      |   |      |      |
 *                                                  `-------------'   `-------------'
 */
[SYMB] = LAYOUT_albatross(
 TO(BASE),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,  KC_EQL, KC_UNDS, KC_LCBR, KC_RCBR,  KC_GRV,   KC_NO,                        KC_NO,  KC_GRV, KC_LCBR, KC_RCBR, KC_UNDS,  KC_EQL,   KC_NO,   KC_NO,
    KC_NO,   KC_NO, KC_BSLS, KC_MINS, KC_LBRC, KC_RBRC,   KC_NO, KC_TRNS,                      KC_TRNS,   KC_NO, KC_LBRC, KC_RBRC, KC_MINS, KC_BSLS,   KC_NO,   KC_NO,
    KC_NO,   KC_NO, KC_PIPE, KC_PLUS,   KC_LT,   KC_GT,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_PLUS, KC_PIPE,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                                                   KC_NO,   KC_NO,      KC_NO,   KC_NO
),
/* Keymap 3: Move
 *
 * ,-------------------------------------------------------.                 ,-------------------------------------------------------.
 * | BASE |      |      |      |      |      |      |      |                 |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |      |      | PGUP |      |      |      |                 |      |      |      | PGUP |      |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |      | HOME |  UP  |  END |      | MOVE |                 | MOVE |      | HOME |  UP  |  END |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |      | LEFT | DOWN | RGHT |      |      |                 |      |      | LEFT | DOWN | RGHT |      |      |      |
 * |------+------+------+------+------+------+------+------+------.   ,------+------+------+------+------+------+------+------+------|
 * |      |      |      |      | PGDN |      |      |      |      |   |      |      |      |      | PGDN |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |      |      |
 * `------------------------------------------------+------+------|   |------+------+------------------------------------------------'
 *                                                  |      |      |   |      |      |
 *                                                  `-------------'   `-------------'
 */
[MOVE] = LAYOUT_albatross(
 TO(BASE),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_PGUP,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO, KC_PGUP,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO, KC_HOME,   KC_UP,  KC_END,   KC_NO, KC_TRNS,                      KC_TRNS,   KC_NO, KC_HOME,   KC_UP,  KC_END,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO, KC_LEFT, KC_DOWN, KC_RGHT,   KC_NO,   KC_NO,                        KC_NO,   KC_NO, KC_LEFT, KC_DOWN, KC_RGHT,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_PGDN,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_PGDN,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                                                   KC_NO,   KC_NO,      KC_NO,   KC_NO
),
/* Keymap 4: Number Pad Layer
 *
 * ,-------------------------------------------------------.                 ,-------------------------------------------------------.
 * | BASE |      |      |      |      |      |      |      |                 |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |      | PAST | PSLS | NLCK |      |      |                 |      |      | NLCK | PSLS | PAST |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      | PMNS |  P9  |  P8  |  P7  |      |      |                 |      |      |  P7  |  P8  |  P9  | PMNS |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      | PPLS |  P6  |  P5  |  P4  |      |      |                 |      |      |  P4  |  P5  |  P6  | PPLS |      |      |
 * |------+------+------+------+------+------+------+------+------.   ,------+------+------+------+------+------+------+------+------|
 * |      |      | PEQL |  P3  |  P2  |  P1  |      | LWIN | CAPS |   |      |      |      |  P1  |  P2  |  P3  | EQL  |      |      |
 * |------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
 * |      |      | NUMP | PCMM | PDOT |  P0  | BSPC |  TAB |  DEL |   | LWIN | ENT  | SPC  |  P0  | PDOT | PCMM | NUMP |      |      |
 * `------------------------------------------------+------+------|   |------+------+------------------------------------------------'
 *                                                  |  SPC |  ENT |   | TAB  | BSPC |
 *                                                  `-------------'   `-------------'
 */
[NUMP] = LAYOUT_albatross(
 TO(BASE),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO, KC_PAST, KC_PSLS, KC_NLCK,   KC_NO,   KC_NO,                        KC_NO,   KC_NO, KC_NLCK, KC_PSLS, KC_PAST,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO, KC_PMNS,   KC_P9,   KC_P8,   KC_P7,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_P7,   KC_P8,   KC_P9, KC_PMNS,   KC_NO,   KC_NO,
    KC_NO,   KC_NO, KC_PPLS,   KC_P6,   KC_P5,   KC_P4,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_P4,   KC_P5,   KC_P6, KC_PPLS,   KC_NO,   KC_NO,
    KC_NO,   KC_NO, KC_PEQL,   KC_P3,   KC_P2,   KC_P1,   KC_NO, KC_LWIN, KC_CAPS,      KC_NO,   KC_NO,   KC_NO,   KC_P1,   KC_P2,   KC_P3, KC_PEQL,   KC_NO,   KC_NO,
    KC_NO,   KC_NO, KC_TRNS, KC_PCMM, KC_PDOT,   KC_P0, KC_BSPC,  KC_TAB,  KC_DEL,    KC_LWIN,  KC_ENT,  KC_SPC,   KC_P0, KC_PDOT, KC_PCMM, KC_TRNS,   KC_NO,   KC_NO,
                                                                  KC_SPC,  KC_ENT,     KC_TAB, KC_BSPC
),
/* Keymap 5: Media Layer
 *
 * ,-------------------------------------------------------.                 ,-------------------------------------------------------.
 * | BASE |      |      |      |      |      |      |      |                 |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |      | BRID |      | BRIU |      |      |                 |      |      | BRID |      | BRIU |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |      | VOLD | MUTE | VOLU |      |      |                 |      |      | VOLD | MUTE | VOLU |      |      |      |
 * |------+------+------+------+------+------+------+------|                 |------+------+------+------+------+------+------+------|
 * |      |      |      | MPRV | MPLY | MNXT |      |      |                 |      |      | MPRV | MPLY | MNXT |      |      |      |
 * |------+------+------+------+------+------+------+------+------.   ,------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
 * |      |      |      | MOVE |      |      |      |      |      |   |      |      |      |      |      | MOVE |      |      |      |
 * `------------------------------------------------+------+------|   |------+------+------------------------------------------------'
 *                                                  |      |      |   |      |      |
 *                                                  `-------------'   `-------------'
 */
[MDIA] = LAYOUT_albatross(
 TO(BASE),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO, KC_BRID,   KC_NO, KC_BRIU,   KC_NO,   KC_NO,                        KC_NO,   KC_NO, KC_BRID,   KC_NO, KC_BRIU,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO, KC_VOLD, KC_MUTE, KC_VOLU,   KC_NO,   KC_NO,                        KC_NO,   KC_NO, KC_VOLD, KC_MUTE, KC_VOLU,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO, KC_MPRV, KC_MPLY, KC_MNXT,   KC_NO,   KC_NO,                        KC_NO,   KC_NO, KC_MPRV, KC_MPLY, KC_MNXT,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO, KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,   KC_NO,   KC_NO,   KC_NO,
                                                                   KC_NO,   KC_NO,      KC_NO,   KC_NO
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {};

// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888
.d8888b 888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888
"Y8888b. 888     888  888 888      X88      888    888 888 Y8b.          888 X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888
88888P' 888                 888 888                 888 888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/modifiers.h>
// clang-format off

// Aliases
#define BE_SUP2 GRAVE  // ²
#define BE_AMPR n1    // &
#define BE_EACU N2    // é
#define BE_DQUO N3    // "
#define BE_QUOT N4    // '
#define BE_LPRN N5    // (
#define BE_SECT N6    // §
#define BE_EGRV N7    // è
#define BE_EXLM N8    // !
#define BE_CCED N9    // ç
#define BE_AGRV N0    // à
#define BE_RPRN MINUS // )
#define BE_MINS EQUAL  // -
#define BE_A    Q    // A
#define BE_Z    W    // Z
#define BE_E    E    // E
#define BE_R    R    // R
#define BE_T    T    // T
#define BE_Y    Y    // Y
#define BE_U    U    // U
#define BE_I    I    // I
#define BE_O    O    // O
#define BE_P    P    // P
#define BE_DCIR LEFT_BRACKET // ^ (dead)
#define BE_DLR  RIGHT_BRACKET // $
#define BE_Q    A    // Q
#define BE_S    S    // S
#define BE_D    D    // D
#define BE_F    F    // F
#define BE_G    G    // G
#define BE_H    H    // H
#define BE_J    J    // J
#define BE_K    K    // K
#define BE_L    L    // L
#define BE_M    SEMICOLON // M
#define BE_UGRV SINGLE_QUOTE // ù
#define BE_MICR NON_US_HASH // µ
#define BE_LABK NON_US_BACKSLASH  // <
#define BE_W    Z    // W
#define BE_X    X    // X
#define BE_C    C    // C
#define BE_V    V    // V
#define BE_B    B    // B
#define BE_N    N    // N
#define BE_COMM M    // ,
#define BE_SCLN COMMA // ;
#define BE_COLN PERIOD  // :
#define BE_EQL  SLASH // =
#define BE_SUP3 LS(BE_SUP2) // ³
#define BE_1    LS(BE_AMPR) // 1
#define BE_2    LS(BE_EACU) // 2
#define BE_3    LS(BE_DQUO) // 3
#define BE_4    LS(BE_QUOT) // 4
#define BE_5    LS(BE_LPRN) // 5
#define BE_6    LS(BE_SECT) // 6
#define BE_7    LS(BE_EGRV) // 7
#define BE_8    LS(BE_EXLM) // 8
#define BE_9    LS(BE_CCED) // 9
#define BE_0    LS(BE_AGRV) // 0
#define BE_DEG  LS(BE_RPRN) // °
#define BE_UNDS LS(BE_MINS) // _
#define BE_DIAE LS(BE_DCIR) // ¨ (dead)
#define BE_ASTR LS(BE_DLR)  // *
#define BE_PERC LS(BE_UGRV) // %
#define BE_PND  LS(BE_MICR) // £
#define BE_RABK LS(BE_LABK) // >
#define BE_QUES LS(BE_COMM) // ?
#define BE_DOT  LS(BE_SCLN) // .
#define BE_SLSH LS(BE_COLN) // /
#define BE_PLUS LS(BE_EQL)  // +
#define BE_PIPE RA(BE_AMPR) // |
#define BE_AT   RA(BE_EACU) // @
#define BE_HASH RA(BE_DQUO) // #
#define BE_CIRC RA(BE_SECT) // ^
#define BE_LCBR RA(BE_CCED) // {
#define BE_RCBR RA(BE_AGRV) // }
#define BE_EURO RA(BE_E)    // €
#define BE_LBRC RA(BE_DCIR) // [
#define BE_RBRC RA(BE_DLR)  // ]
#define BE_ACUT RA(BE_UGRV) // ´ (dead)
#define BE_GRV  RA(BE_MICR) // ` (dead)
#define BE_BSLS RA(BE_LABK) // (backslash)
#define BE_TILD RA(BE_EQL)  // ~


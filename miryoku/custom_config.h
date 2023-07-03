// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define XXX &none

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             U_LT(U_NAV, SQT),           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_MT(LCTRL, Z),    U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_MEDIA, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp PIPE2,        &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE2,         U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp NON_US_BACKSLASH,   &kp N1,            &kp N2,            &kp N3,            &kp NON_US_HASH,       U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp GRAVE,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_GAME \
&kp GRAVE,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4,         \
&kp TAB,             &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
&kp LSHFT,           &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp LBKT,          &kp COMMA,         &kp DOT,           &kp RBKT,         \
U_NP,                U_NP,              &kp ESC,           &kp SPC,           &kp LALT,          U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &to U_BASE \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &to U_GAME \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Gaming")

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME   10

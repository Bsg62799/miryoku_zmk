// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

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
MIRYOKU_X(FUN,    "Fun") 

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

#define MIRYOKU_GAME \
&kp TAB,             &kp Q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHIFT,             &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp LCTL,             &kp Z,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp PGUP,           &kp SPACE,         &kp PGDN,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP



#if !defined (MIRYOKU_LAYOUTMAPPING_ADV360PRO)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_ADV360PRO( \
     K00, K01, K02, K03, K04,                                                        K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                                                        K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                                                        K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                                                        K35, K36, K37, N38, N39 \
) \
XXX  XXX  XXX  XXX  XXX  XXX  XXX                                               XXX  XXX  XXX  XXX  XXX  XXX  XXX \
XXX  K00  K01  K02  K03  K04  XXX                                               XXX  K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14  XXX       XXX  XXX                 XXX  XXX       XXX  K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       XXX  XXX              K25  K26  K27  K28  K29  XXX \
XXX  XXX  XXX  XXX  XXX            K32  K33  K34                 K35  K36  K37            XXX  XXX  XXX  XXX  XXX

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_ADV360PRO

// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALTERNATIVES_GAME \
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
&kp ESC  XXX  XXX  XXX  XXX  XXX  &tog MIRYOKU_ALTERNATIVES_GAME                                               XXX  XXX  XXX  XXX  XXX  XXX  XXX \
XXX  K00  K01  K02  K03  K04  XXX                                               XXX  K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14  XXX       XXX  XXX                 XXX  XXX       XXX  K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       XXX  XXX              K25  K26  K27  K28  K29  XXX \
XXX  XXX  XXX  XXX  XXX            K32  K33  K34                 K35  K36  K37            XXX  XXX  XXX  XXX  XXX

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_ADV360PRO

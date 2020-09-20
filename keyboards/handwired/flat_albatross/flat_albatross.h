#ifndef FLAT_ALBATROSS_H
#define FLAT_ALBATROSS_H

#include "quantum.h"
#include <stdint.h>
#include <stdbool.h>
#include <util/delay.h>

void init_flat_albatross(void);

/*
 *   LEFT HAND: LINES 38-46
 *  RIGHT HAND: LINES 48-55
 */
#define LAYOUT_flat_albatross(                                                  \
                                                                        \
    k00,k01,k02,k03,k04,k05,k06,k07,                                           \
    k10,k11,k12,k13,k14,k15,k16,k17,                                           \
    k20,k21,k22,k23,k24,k25,k26,k27,                                           \
    k30,k31,k32,k33,k34,k35,k36,k37,                                           \
    k40,k41,k42,k43,k44,k45,k46,k47,k67,                                       \
    k50,k51,k52,k53,k54,k55,k56,k57,k66,                                    \
                    k61,k62,k63,k64,k65,                                    \
                                                                        \
            k08,k09,k0A,k0B,k0C,k0D,k0E,k0F,                                   \
            k18,k19,k1A,k1B,k1C,k1D,k1E,k1F,                                   \
            k28,k29,k2A,k2B,k2C,k2D,k2E,k2F,                                   \
            k38,k39,k3A,k3B,k3C,k3D,k3E,k3F,                                   \
        k68,k48,k49,k4A,k4B,k4C,k4D,k4E,k4F,                                   \
        k69,k58,k59,k5A,k5B,k5C,k5D,k5E,k5F,                                   \
        k6A,k6B,k6C,k6D,k6E)                                                   \
                                                                        \
   /* matrix positions */                                               \
   {                                                                    \
    {   k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, k0F }, \
    {   k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k0C, k0D, k0E, k0F }, \
    {   k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k0C, k0D, k0E, k0F }, \
    {   k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k0C, k0D, k0E, k0F }, \
    {   k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, k4C, k4D, k4E, k4F }, \
    {   k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5A, k5B, k5C, k5D, k5E, k5F }, \
    { KC_NO, k61, k62, k63, k64, k65, k66, k67, k68, k69, k6A, k6B, k6C, k6D, k6E, KC_NO }, \
   }


#endif

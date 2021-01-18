/* ===========================================================
   #File: vec2.h #
   #Date: 18 Jan 2021 #
   #Revision: 1.0 #
   #Creator: Omid Miresmaeili #
   #Description: 2D vector #
   #Notice: (C) Copyright 2021 by Omid. All Rights Reserved. #
   =========================================================== */
#pragma once

#include "common.h"

struct Vec2f {
    float x;
    float y;
};

float
Vec2f_Magnitude (Vec2f const * vec) {
    return sqrtf((vec->x * vec->x) + (vec->y * vec->y));
}
Vec2f
Vec2f_Normalized (Vec2f const * vec) {
    float m = Vec2f_Magnitude(vec);
    return {vec->x / m, vec->y / m};
}
Vec2f
Vec2f_Rotated (Vec2f const * vec, float alpha) {
    return {
        (vec->x * cosf(alpha) - vec->y * sinf(alpha)),
        (vec->x * sinf(alpha) + vec->y * cosf(alpha))
    };
}

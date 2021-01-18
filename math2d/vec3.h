/* ===========================================================
   #File: vec3.h #
   #Date: 18 Jan 2021 #
   #Revision: 1.0 #
   #Creator: Omid Miresmaeili #
   #Description: 3D vector #
   #Notice: (C) Copyright 2021 by Omid. All Rights Reserved. #
   =========================================================== */
#pragma once

#include "common.h"

struct Vec3f {
    float x;
    float y;
    float w;
};

float
Vec3f_Magnitude (Vec3f const * vec) {
    return sqrtf((vec->x * vec->x) + (vec->y * vec->y));
}
Vec3f
Vec3f_Normalized (Vec3f const * vec) {
    float m = Vec3f_Magnitude(vec);
    return {vec->x / m, vec->y / m, 1.0f};
}
Vec3f
Vec3f_Rotated (Vec3f const * vec, float alpha) {
    return {
        (vec->x * cosf(alpha) - vec->y * sinf(alpha)),
        (vec->x * sinf(alpha) + vec->y * cosf(alpha)),
        1.0f
    };
}

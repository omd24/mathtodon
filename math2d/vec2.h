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

union Vec2f {
    struct {
        float x;
        float y;
    };
    float E[2];
};
inline Vec2f
operator * (float a, Vec2f B) {
    Vec2f res = {};
    res.x = a * B.x;
    res.y = a * B.y;
    return res;
}
inline Vec2f
operator * (Vec2f B, float a) {
    Vec2f res = a * B;
    return res;
}
inline Vec2f &
operator *= (Vec2f & B, float a) {
    B = a * B;
    return B;
}
inline Vec2f
operator - (Vec2f A) {
    Vec2f res = {};
    res.x = -res.x;
    res.y = -res.y;
    return res;
}
inline Vec2f
operator + (Vec2f A, Vec2f B) {
    Vec2f res = {};
    res.x = A.x + B.x;
    res.y = A.y + B.y;
    return res;
}
inline Vec2f &
operator += (Vec2f & A, Vec2f B) {
    A = A + B;
    return A;
}
inline Vec2f
operator - (Vec2f A, Vec2f B) {
    Vec2f res = {};
    res.x = A.x - B.x;
    res.y = A.y - B.y;
    return res;
}
inline Vec2f &
operator -= (Vec2f & A, Vec2f B) {
    A = A - B;
    return A;
}
inline Vec2f
Vec2f_Create (float x, float y) {
    Vec2f res = {};
    res.x = x;
    res.y = y;
    return res;
}
inline float
Vec2f_Magnitude (Vec2f const * vec) {
    return sqrtf((vec->x * vec->x) + (vec->y * vec->y));
}
inline Vec2f
Vec2f_Normalized (Vec2f const * vec) {
    float m = Vec2f_Magnitude(vec);
    return {vec->x / m, vec->y / m};
}
inline Vec2f
Vec2f_Rotated (Vec2f const * vec, float alpha) {
    float x = (vec->x * cosf(alpha) - vec->y * sinf(alpha));
    float y = (vec->x * sinf(alpha) + vec->y * cosf(alpha));
    return {x, y};
}

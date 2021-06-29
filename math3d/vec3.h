/* ===========================================================
   #File: vec3.h #
   #Date: 29 June 2021 #
   #Revision: 1.0 #
   #Creator: Omid Miresmaeili #
   #Description: C header file to work with 3D vectors #
   #Notice: (C) Copyright 2021 by Omid. All Rights Reserved. #
   =========================================================== */

#pragma once
#include <math.h>

typedef union {
    struct {
        float x;
        float y;
        float z;
    };
    float E[3];
} vec3f;

// type aliases for vec3f
typedef vec3f point3;
typedef vec3f color;

inline vec3f
vec3_add (vec3f const a, vec3f const b) {
    vec3f ret;
    for (int i = 0; i < 3; ++i)
        ret.E[i] = a.E[i] + b.E[i];
    return ret;
}
inline vec3f
vec3_sub (vec3f const a, vec3f const b) {
    vec3f ret;
    for (int i = 0; i < 3; ++i)
        ret.E[i] = a.E[i] - b.E[i];
    return ret;
}
inline vec3f
vec3_scale (vec3f const v, float const s) {
    vec3f ret;
    for (int i = 0; i < 3; ++i)
        ret.E[i] = v.E[i] * s;
    return ret;
}
inline float
vec3_mul_dot (vec3f const a, vec3f const b) {
    float ret = 0.0f;
    for (int i = 0; i < 3; ++i)
        ret += (a.E[i] * b.E[i]);
    return ret;
}
inline vec3f
vec3_mul_cross (vec3f const a, vec3f const b) {
    vec3f ret;
    ret.E[0] = a.E[1] * b.E[2] - a.E[2] * b.E[1];
    ret.E[1] = a.E[2] * b.E[0] - a.E[0] * b.E[2];
    ret.E[2] = a.E[0] * b.E[1] - a.E[1] * b.E[0];
    return ret;
}
inline float
vec3_len_squared (vec3f const v) {
    return vec3_mul_dot(v, v);
}
inline float
vec3_len (vec3f const v) {
    return sqrtf(vec3_mul_dot(v, v));
}
inline vec3f
vec3_normalize (vec3f v) {
    float s = 1.f / vec3_len(v);
    return vec3_scale(v, s);
}

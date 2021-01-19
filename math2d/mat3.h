/* ===========================================================
   #File: mat3.h #
   #Date: 19 Jan 2021 #
   #Revision: 1.0 #
   #Creator: Omid Miresmaeili #
   #Description: 3x3 matrix to handle 2D transformations #
   #Notice: (C) Copyright 2021 by Omid. All Rights Reserved. #
   =========================================================== */
#pragma once
#include "common.h"
#include "vec3.h"
struct Mat3f {
    float cells[3][3];
};
Vec3f
Mat3_MulVec3 (Mat3f const * mat, Vec3f const * vec) {
    Vec3f out;
    out.x = mat->cells[0][0] * vec->x + mat->cells[0][1] * vec->y + mat->cells[0][2] * vec->w;
    out.y = mat->cells[1][0] * vec->x + mat->cells[1][1] * vec->y + mat->cells[1][2] * vec->w;
    out.w = mat->cells[2][0] * vec->x + mat->cells[2][1] * vec->y + mat->cells[2][2] * vec->w;
    return out;
}
Mat3f
Mat3_MulMat3 (Mat3f const * mat1, Mat3f const * mat2) {
    Mat3f out;
    for (int row_left = 0; row_left < 3; row_left++) {
        for (int col_right = 0; col_right < 3; col_right++) {
            out.cells[row_left][col_right] = 0.0f;
            for (int i = 0; i < 3; i++) {
                out.cells[row_left][col_right] += mat1->cells[row_left][i] * mat2->cells[i][col_right];
            }
        }
    }
    return out;
}
Mat3f
Scale(float factor) {
    return {
        factor, 0.0f, 0.0f,
        0.0f, factor, 0.0f,
        0.0f, 0.0f, 1.0f
    };
}
Mat3f
Identity() {
    return Scale(1.0f);
}
Mat3f
FlipY() {
    return {
        1.0f, 0.0f, 0.0f,
        0.0f, -1.0f, 0.0f,
        0.0f, 0.0f, 1.0f
    };
}
Mat3f
Rotation(float alpha) {
    return {
        cosf(alpha), -sinf(alpha), 0.0f,
        sinf(alpha),  cosf(alpha), 0.0f,
        0.0f,                0.0f, 1.0f
    };
}
Mat3f
Translation(float x, float y) {
    return {
        1.0f, 0.0f, x,
        0.0f, 1.0f, y,
        0.0f, 0.0f, 1.0f
    };
}
Mat3f
ScaleIndependent(float x, float y) {
    return {
        x   , 0.0f, 0.0f,
        0.0f,    y, 0.0f,
        0.0f, 0.0f, 1.0f
    };
}

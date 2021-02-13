/* ===========================================================
   #File: Source.cpp #
   #Date: 17 Jan 2021 #
   #Revision: 1.0 #
   #Creator: Omid Miresmaeili #
   #Description: Exprimenting with math2d #
   #Notice: (C) Copyright 2021 by Omid. All Rights Reserved. #
   =========================================================== */

#include "dynarray.h"
#include "vec2.h"

#define PI 3.14159f

static void
test_dynarray () {
    ::printf("\n======== TESTING DYNARRAY ========\n");
    double * a = NULL;
    DYN_ARRAY_INIT(double, a);

    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));
    DYN_ARRAY_PUSHBACK(double, a, 25);
    DYN_ARRAY_PUSHBACK(double, a, 25);
    DYN_ARRAY_PUSHBACK(double, a, 25);
    DYN_ARRAY_PUSHBACK(double, a, 25);
    DYN_ARRAY_PUSHBACK(double, a, 25);
    DYN_ARRAY_PUSHBACK(double, a, 25);
    DYN_ARRAY_PUSHBACK(double, a, 25);
    DYN_ARRAY_PUSHBACK(double, a, 25);
    DYN_ARRAY_PUSHBACK(double, a, 25);
    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));
    DYN_ARRAY_EXPAND(double, a, 10);
    DYN_ARRAY_PUSHBACK(double, a, 25);
    DYN_ARRAY_PUSHBACK(double, a, 25);
    DYN_ARRAY_PUSHBACK(double, a, 25);
    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));
    DYN_ARRAY_DEINIT(a);
}
static void
test_vec2 () {
    ::printf("\n======== TESTING 2D Vector ========\n");
    Vec2f v = {};
    v.x = 2.0f;
    v.y = 1.0f;
    ::printf("v = [%.2f, %.2f]\n", v.x, v.y);
    ::printf("Length of the vector is %.2f\n", Vec2f_Magnitude(&v));
    Vec2f nv = Vec2f_Normalized(&v);
    ::printf("Normalized vector is [%.2f, %.2f]\n", nv.x, nv.y);
    Vec2f rv = Vec2f_Rotated(&v, PI / 4);
    ::printf("Rotated vector by PI/4 is [%.2f, %.2f]\n", rv.x, rv.y);

    Vec2f v1 = v;
    Vec2f v2 = v1 + v;
    ::printf("v1 = [%.2f, %.2f]\n", v1.x, v1.y);
    ::printf("v2 = [%.2f, %.2f]\n", v2.x, v2.y);

    v1 += v2;
    v2 -= 2.5 * v;
    ::printf("v1 = [%.2f, %.2f]\n", v1.E[0], v1.E[1]);
    ::printf("v2 = [%.2f, %.2f]\n", v2.E[0], v2.E[1]);

}
int
main () {
    //test_dynarray();
    test_vec2();
    return (0);
}


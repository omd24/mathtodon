/* ===========================================================
   #File: Source.cpp #
   #Date: 17 Jan 2021 #
   #Revision: 1.0 #
   #Creator: Omid Miresmaeili #
   #Description: Exprimenting with math2d #
   #Notice: (C) Copyright 2021 by Omid. All Rights Reserved. #
   =========================================================== */

#include "dynarray.h"

int main () {
    double * a = NULL;
    DYN_ARRAY_INIT(double, a);

    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));

    DYN_ARRAY_PUSHBACK(double, a, 25);

    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));


    DYN_ARRAY_PUSHBACK(double, a, 25);

    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));


    DYN_ARRAY_PUSHBACK(double, a, 25);

    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));


    DYN_ARRAY_PUSHBACK(double, a, 25);

    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));


    DYN_ARRAY_PUSHBACK(double, a, 25);

    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));


    DYN_ARRAY_PUSHBACK(double, a, 25);

    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));


    DYN_ARRAY_PUSHBACK(double, a, 25);

    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));


    DYN_ARRAY_PUSHBACK(double, a, 25);

    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));


    DYN_ARRAY_PUSHBACK(double, a, 25);

    ::printf("the size of the array = %I64u\n", DYN_ARRAY_LENGTH(a));
    ::printf("the capcaity of the array = %I64u\n", DYN_ARRAY_CAPACITY(a));

    DYN_ARRAY_DEINIT(a);
    return (0);
}


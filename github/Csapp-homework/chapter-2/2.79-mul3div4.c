/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.79-mul3div4.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/08 15:45:51
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>

int divide_power2(int x, int k) {
    int w = sizeof(int) << 3;
    return (x + ((x >> (w - 1)) & ((1 << k) - 1))) >> k;
};

int mul3div4(int x) {
    int w = sizeof(int) << 3;
    int mul3 = (x << 2) - x;
    return divide_power2(mul3, 2);
};

int main() {
    printf("mul3div4(2) = %d\n", mul3div4(2));
    printf("mul3div4(-2) = %d\n", mul3div4(-2));
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

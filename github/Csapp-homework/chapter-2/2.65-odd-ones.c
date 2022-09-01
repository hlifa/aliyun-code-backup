/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.65-odd-one.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/30 11:23:21
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

int odd_ones(unsigned x) {
    x ^= x >> 1;
    x ^= x >> 2;
    x ^= x >> 4;
    x ^= x >> 8;
    x ^= x >> 16;
    return !!(x & 1);
};

int main() {
    printf("odd_ones(7) = %d\n", odd_ones(7));
    printf("odd_ones(1) = %d\n", odd_ones(1));
    printf("odd_ones(15) = %d\n", odd_ones(15));

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

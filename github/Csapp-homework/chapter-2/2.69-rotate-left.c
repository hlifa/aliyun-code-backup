/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.69-rotate-left.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/03 16:07:33
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

// 0 <= n < w
// w = 32
unsigned rotate_left(unsigned x, int n) {
    unsigned left_x = x << n;
    unsigned right_x = (x >> 1) >> (32 - n - 1);
    return left_x | right_x;
};

int main() {
    printf("rotate_left(0x12345678, 4) = 0x%x\n", rotate_left(0x12345678, 4));
    printf("rotate_left(0x12345678, 20) = 0x%x\n", rotate_left(0x12345678, 20));
    printf("rotate_left(0x12345678, 0) = 0x%x\n", rotate_left(0x12345678, 0));
    printf("rotate_left(0x12345678, 31) = 0x%x\n", rotate_left(0x12345678, 31));
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

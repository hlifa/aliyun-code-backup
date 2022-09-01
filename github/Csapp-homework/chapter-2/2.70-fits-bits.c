/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.70-fits-bits.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/03 16:34:50
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>

// 1 <= n <= w
int fits_bits(int x, int n) {
    x >>= (n - 1);
    return x == -1 || x == 0;
};

int main() {
    printf("fits_bits(1, 1) = %d\n", fits_bits(1, 1));
    printf("fits_bits(-1, 1) = %d\n", fits_bits(-1, 1));
    printf("fits_bits(0, 1) = %d\n", fits_bits(0, 1));
    printf("fits_bits(2, 1) = %d\n", fits_bits(2, 1));
    printf("fits_bits(2, 2) = %d\n", fits_bits(2, 2));
    printf("fits_bits(-2, 2) = %d\n", fits_bits(-2, 2));
    printf("fits_bits(0x80000000, 16) = %d\n", fits_bits(0x80000000, 16));
    printf("fits_bits(0x80000000, 32) = %d\n", fits_bits(0x80000000, 32));
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

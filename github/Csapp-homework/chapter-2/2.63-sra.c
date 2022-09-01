/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.63-sra.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/28 19:54:30
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

int sra(int x, int k) {
    int xsrl = (unsigned)x >> k;
    unsigned a = (x >> ((sizeof(int) << 3) - 2)) & 2;
    unsigned b = a << ((sizeof(int) << 3) - k - 1);
    unsigned c = b - 1;
    return ~c | xsrl;
};

int main() {
    printf("sra(7, 2) = %d, 7 >> 2=%d\n", sra(7, 2), 7 >> 2);
    printf("sra(-1, 1) = %d, -1 >> 1 = %d\n", sra(-1, 1), -1 >> 1);

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

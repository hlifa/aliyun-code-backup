/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.66-leftmost-one.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/03 10:56:12
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>

int leftmost_one(unsigned x) {
    x |= x>>1;
    x |= x>>2;
    x |= x>>4;
    x |= x>>8;
    x |= x>>16;
    return (x>>1)^x;
};

int main() {
    printf("leftmost_one(0x80000000) = %x\n", leftmost_one(0x80000000));
    printf("leftmost_one(0xFF000000) = %x\n", leftmost_one(0xFF000000));
    printf("leftmost_one(0x00006600) = %x\n", leftmost_one(0x00006600));
    printf("leftmost_one(0x00000000) = %x\n", leftmost_one(0x00000000));

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

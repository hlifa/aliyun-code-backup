/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.71-xbyte.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/03 16:55:52
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>

typedef unsigned packed_t;

int xbytes(packed_t word, int bytenum) {
    int ret = word << (24 - (bytenum << 3));
    return ret >> 24;
};

int main() {
    printf("xbytes(0x12345678, 2) = %d\n", xbytes(0x12345678, 2));
    printf("xbytes(0x87654321, 3) = %d\n", xbytes(0x87654321, 3));
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

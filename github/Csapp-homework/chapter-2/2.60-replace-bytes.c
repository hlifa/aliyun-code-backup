/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.60-replace-bytes.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/28 17:17:51
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

unsigned replace_bytes(unsigned x, int i, unsigned char b) {
    return (x & ~(0xFF << (i << 3))) | (b << (i << 3));
};

int main() {
    printf("replace_bytes(0x12345678, 2, 0xAB) = 0x%x\n", replace_bytes(0x12345678, 2, 0xAB));
    printf("replace_bytes(0x12345678, 0, 0xAB) = 0x%x\n", replace_bytes(0x12345678, 0, 0xAB));

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.59-combine-bytes.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/28 17:12:54
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

int combine_bytes(int x, int y) {
    return (x & 0xFF) | (y & ~0xFF);
};

int main() {
    printf("combine 0x89ABCDEF and 0x76543210 = %x\n", combine_bytes(0x89ABCDEF, 0x76543210));

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

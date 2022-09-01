/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.61-main.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/28 17:33:24
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>

int test_int(int x) {
    return !(~x) || !x || !(~x & 0xFF) || !(x & (0xFF << ((sizeof(x) - 1) << 3))); 
};

int main() {
    printf("test_int(0xFFFFFFFF) = %d\n", test_int(0xFFFFFFFF));
    printf("test_int(0x123456FF) = %d\n", test_int(0x123456FF));
    printf("test_int(0x00123456) = %d\n", test_int(0x00123456));
    printf("test_int(0x00000000) = %d\n", test_int(0x00000000));
    printf("test_int(0xFFFFFFF8) = %d\n", test_int(0xFFFFFFF8));
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

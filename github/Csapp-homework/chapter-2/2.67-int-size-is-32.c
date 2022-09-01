/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.67-int-size-is-32.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/03 11:06:36
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdint.h>
#include <stdio.h>

// 在int至少为32位和至少为16位的机器上都能正常编译运行
int int_size_is_32() {
    int64_t x = 1;
    int set_msb = (int)(x << 31);
    int beyond_msb = (int)(x << 32);
    printf("set_msb=%d, beyond_msb=%d\n", set_msb, beyond_msb);
    return set_msb && !beyond_msb;
};

// 仅在int至少为32位的机器上都能正常编译运行
int int_size_is_32_v2() {
    int set_msb = 1 << 31;
    int beyond_msb = 2 << 31;
    printf("set_msb=%d, beyond_msb=%d\n", set_msb, beyond_msb);
    return set_msb && !beyond_msb;
};

// 在int至少为32位和至少为16位的机器上都能正常编译运行
int int_size_is_32_v3() {
    int x = 1 << 15;
    x <<= 15;
    int set_msb = x << 1;
    int beyond_msb = x << 2;
    printf("set_msb=%d, beyond_msb=%d\n", set_msb, beyond_msb);
    return set_msb && !beyond_msb;
};

int main() {
    printf("int_size_is_32() = %d\n", int_size_is_32());
    printf("int_size_is_32_v2() = %d\n", int_size_is_32_v2());
    printf("int_size_is_32_v3() = %d\n", int_size_is_32_v3());

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

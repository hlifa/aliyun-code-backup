/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.78-divide_power2.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/08 09:51:29
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>

int divide_power2(int x, int k) {
    int w = sizeof(int) << 3;
    return (x + (x>>(w - 1) & ((1<<k) - 1))) >> k;
};

int main() {
    printf("divide_power2(5, 0)=%d\n", divide_power2(5, 0));
    printf("divide_power2(5, 2)=%d\n", divide_power2(5, 2));
    printf("divide_power2(5, 3)=%d\n", divide_power2(5, 3));
    printf("divide_power2(-5, 0)=%d\n", divide_power2(-5, 0));
    printf("divide_power2(-5, 2)=%d\n", divide_power2(-5, 2));
    printf("divide_power2(-5, 3)=%d\n", divide_power2(-5, 3));
    printf("divide_power2(3, 2)=%d\n", divide_power2(3, 2));
    printf("divide_power2(5, 3)=%d\n", divide_power2(5, 3));
    
    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

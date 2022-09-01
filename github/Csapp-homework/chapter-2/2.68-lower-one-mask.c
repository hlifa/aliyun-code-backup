/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.68-lower-one-mask.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/03 15:55:21
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

int lower_one_mask(int n) {
    return (2 << (n - 1)) - 1;
};

int main() {
    printf("lower_one_mask(1) = 0x%x\n", lower_one_mask(1));
    printf("lower_one_mask(7) = 0x%x\n", lower_one_mask(7));
    printf("lower_one_mask(24) = 0x%x\n", lower_one_mask(24));
    printf("lower_one_mask(32) = 0x%x\n", lower_one_mask(32));
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

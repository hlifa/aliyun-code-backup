/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.62-int-shifts-are-arithmetic.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/28 17:47:59
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

int int_shifts_are_arithmetic() {
    int x = -1;
    return (x>>1) == -1;
};  

int main() {
    printf("int_shifts_are_arithmetic: %d\n", int_shifts_are_arithmetic());
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

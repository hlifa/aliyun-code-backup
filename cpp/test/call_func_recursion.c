/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file call_func_recursion.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/07/09 17:40:08
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

int fac(int n) {
    printf("n'address=%p\n", &n);
    if (n == 1) {
        return 1;
    }
    return fac(n-1)*n;
}

int main(void) {
    fac(3210);
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file names.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/07/09 10:41:38
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdlib.h>
#include <stdio.h>

int a[1000] = {0, 1};
int addone() { return 1; };

char pear[40];
static double peach;
int mango = 1;
static long melon = 2001;

int main(void) {
    int localarr[10000] = {1};
    printf("first local varibale: localarr's address in stock=%p\n", localarr);
    printf("bss a's address=%p\n", a);
    printf("bss addone's address=%p\n", addone);
    int i = 3, j, *p;
    p = malloc(sizeof(i));
    pear[5] = i;
    peach = 2.0 * mango;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file multiple-define-symbol/main.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/02/29 16:43:45
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>
int d=100;
int x=200;
void p1(void);
int main() {  
    p1();
    printf("d=%d,x=%d\n",d,x);
    return 0;            
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

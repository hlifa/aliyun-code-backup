/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.64-any_odd_one.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/30 10:23:25
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

int any_odd_one(unsigned x) {
    unsigned mask = 0xaaaaaaaa;
    return !!(x & mask);
};

int main() {
    printf("any_odd_one(2863311530) = %d\n", any_odd_one(2863311530));
    printf("any_odd_one(1431655765) = %d\n", any_odd_one(1431655765));

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

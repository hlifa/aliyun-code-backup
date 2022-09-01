/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.58-is-little-endian.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/28 17:09:38
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

int is_little_endian() {
    int x = 1;
    return *(int *)((char *)&x);
};

int main() {
    printf("is_little_endian: %d\n", is_little_endian());
    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

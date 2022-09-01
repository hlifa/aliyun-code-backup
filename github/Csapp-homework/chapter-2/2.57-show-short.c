/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.57-show-short.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/28 17:05:38
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

typedef unsigned char* pointer_char;

void show_bytes(pointer_char pc, size_t len) {
    size_t i = 0;
    for (; i < len; ++i) {
        printf("%.2x ", pc[i]);
    }
    printf("\n");
};


void show_short(short x) {
    show_bytes((pointer_char)&x, sizeof(x));
};

int main() {
    show_short(7);
    show_short(-32768);
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

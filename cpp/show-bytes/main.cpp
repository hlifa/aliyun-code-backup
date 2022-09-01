/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file show-bytes/main.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/28 15:09:02
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <cstdio>

typedef unsigned char* pointer_char;

void show_bytes(pointer_char pchar, size_t n) {
    size_t i = 0;
    for (; i < n; ++i) {
        printf("%.2x\t", pchar[i]);
    }
    printf("\n");
};

void show_short(short x) {
    show_bytes((pointer_char)&x, sizeof(short));
};

void show_int(int x) {
    show_bytes((pointer_char)&x, sizeof(int));
};

void show_long(long x) {
    show_bytes((pointer_char)&x, sizeof(long));
};

void show_double(double x) {
    show_bytes((pointer_char)&x, sizeof(double));
};


int main() {
    show_int(7); // 07 00 00 00
    
    show_double(1.0); // 00 00 00 00 00 00 F0 3F 

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

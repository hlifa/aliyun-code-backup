/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file replace-bytes/main.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/28 15:48:40
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <cstdio>

typedef unsigned char* pointer_char;

unsigned replace_bytes_v1(unsigned x, int i, unsigned char b) {
    if (i < 0 || i > (sizeof(unsigned) - 1)) {
        // invalid input, how to process
        //i = 0;
    }

    unsigned char* pchar = (unsigned char*)&x;
    pchar[i] = b;
    return *(unsigned *)pchar;
};

unsigned replace_bytes_v2(unsigned x, int i, unsigned char b) {
    if (i < 0 || i > (sizeof(unsigned) - 1)) {
        // invalid input, how to process
        //i = 0;
    }
    
    return  (x & ~(0xFF << (i << 3))) | (b << (i << 3));
};

void show_bytes(pointer_char pc, size_t n) {
    for (size_t i = 0; i < n; ++i) {
        printf("%.2x ", pc[i]);
    }
    printf("\n");
};

int main() {
    unsigned r1 = replace_bytes_v1(0x12345678, 2, 0xAB);
    show_bytes((pointer_char)&r1, sizeof(unsigned));
    
    unsigned r2 = replace_bytes_v1(0x12345678, 0, 0xAB);
    show_bytes((pointer_char)&r2, sizeof(unsigned));
    
    unsigned r21 = replace_bytes_v2(0x12345678, 2, 0xAB);
    show_bytes((pointer_char)&r21, sizeof(unsigned));
    
    unsigned r22 = replace_bytes_v2(0x12345678, 0, 0xAB);
    show_bytes((pointer_char)&r22, sizeof(unsigned));
    
    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

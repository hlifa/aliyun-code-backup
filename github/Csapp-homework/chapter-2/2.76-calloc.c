/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.76-calloc.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/08 09:30:28
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include <string.h>

void *calloc(size_t nmemb, size_t size) {
    if (nmemb == 0 || size == 0) {
        return NULL;
    }
    size_t bytes_size = nmemb * size;
    if (nmemb != bytes_size/size) {
        return NULL;
    }
    
    void *p = malloc(bytes_size);
    memset(p, 0, bytes_size);
    return p;
};

int main() {
    void *p;
    p = calloc(0x1234, 1);
    assert(p != NULL);
    free(p);

    p = calloc(SIZE_MAX, 2);
    assert(p == NULL);
    free(p);

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

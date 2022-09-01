/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.74-tsub-ok.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/03 20:09:16
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>

int tsub_ok(int x, int y) {
    int w = sizeof(int) << 3;
    int s = x - y;
    x >>= (w - 1);
    y >>= (w - 1);
    s >>= (w - 1);
    int pos_over = ~x && y && s;
    int neg_over = x && ~y && ~s;
    return !(pos_over || neg_over);
};

int main() {
    printf("tsub_ok(0x00000001, 0x80000000) = %d\n", tsub_ok(0x00000001, 0x80000000));
    printf("tsub_ok(0x80000000, 0x000000ff) = %d\n", tsub_ok(0x80000000, 0x000000ff));
    printf("tsub_ok(0x00000001, 0x7fffffff) = %d\n", tsub_ok(0x00000001, 0x7fffffff));
    printf("tsub_ok(0x7fffffff, 0x00000001) = %d\n", tsub_ok(0x7fffffff, 0x00000001));
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

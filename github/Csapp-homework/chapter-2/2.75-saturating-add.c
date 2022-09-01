/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.75-saturating-add.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/03 20:51:11
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>
#include <limits.h>

int saturating_add(int x, int y) {
    int w = sizeof(int) << 3;
    int add = x + y;
    int t = add >> (w - 1);
    x >>= (w - 1);
    y >>= (w - 1);
    int pos_over = ~x & ~y & t;
    int neg_over = x & y & ~t;
    int not_over = ~(pos_over | neg_over);

    return (pos_over & INT_MAX) | (neg_over & INT_MIN) | (not_over & add);
};

int main() {
    printf("saturating_add(0x7fffffff, 0x00000002) = %d(0x%x)\n", saturating_add(0x7fffffff, 0x00000002), saturating_add(0x7fffffff, 0x00000002));
    printf("saturating_add(0x80000000, 0x80000000) = %d(0x%x)\n", saturating_add(0x80000000, 0x80000000), saturating_add(0x80000000, 0x80000000));
    printf("saturating_add(0x7ffffff0, 0x00000002) = %d(0x%x)\n", saturating_add(0x7ffffff0, 0x00000002), saturating_add(0x7ffffff0, 0x00000002));
}
/* vim: set ts=4 sw=4 sts=4 tw=100 */

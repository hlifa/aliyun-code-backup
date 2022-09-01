/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.80-threefourths.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/08 15:53:48
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>
#include <assert.h>
#include <limits.h>

/*
 *  * 这个题目非常有意思，要保证不溢出，就要先做除法，也就是先除以4再乘以3
 *   * 在下边中用到了一个非常巧妙的地方，把一个整数进行拆分
 *    */

/*
 *  * calculate 3/4x, no overflow, round to zero
 *   *
 *    * no overflow means divide 4 first, then multiple 3, diffrent from 2.79 here
 *     *
 *      * rounding to zero is a little complicated.
 *       * every int x, equals f(first 30 bit number) plus l(last 2 bit number)
 *        *
 *         *   f = x & ~0x3
 *          *   l = x & 0x3
 *           *   x = f + l
 *            *   threeforths(x) = f/4*3 + l*3/4
 *             *
 *              * f doesn't care about round at all, we just care about rounding from l*3/4
 *               *
 *                *   lm3 = (l << 1) + l
 *                 *
 *                  * when x > 0, rounding to zero is easy
 *                   *
 *                    *   lm3d4 = lm3 >> 2
 *                     *
 *                      * when x < 0, rounding to zero acts like divide_power2 in 2.78
 *                       *
 *                        *   bias = 0x3    // (1 << 2) - 1
 *                         *   lm3d4 = (lm3 + bias) >> 2
 *                          */

//int threeforths(int x) {
//    int is_neg = x & INT_MIN;
//
//    int f = x & ~0x3;
//    int l = x & 0x3;
//
//    int fd4 = f >> 2;
//    int fd4m3 = (fd4 << 1) + fd4;
//
//    int lm3 = (l << 1) + l;
//    int bias = (1 << 1) + 1;
//    (is_neg && (lm3 += bias));
//    int lm3d4 = lm3 >> 2;
//
//    return fd4m3 + lm3d4;                    
//};


/**
 *
 * 我的思路：3/4x 相当于 (x<<1 + x) >> 2, 其中x<<1 + x可能导致溢出，而题目不允许溢出，可以根据移位运算的分配率，
 * (x<<1 + x) >> 2 ====> (x<<1)>>2 + x>>2 =======> x>>1 + x>>2 显然不会造成溢出
 *
 * x向右移位时要注意x为负数时如何满足向零舍入，当x<0时， (x+bias)>>k, bias=(1<<k)-1
 */

int threeforths(int x) {
    int f = x & ~0x3;
    int l  = x & 0x3;
    
    int fd4 = f >> 2;
    int fd4m3 = (fd4 << 1) + fd4;

    int lm3 = (l << 1) + l;
    int w = sizeof(int) << 3;
    int lm3d4 = (lm3 + ((x >> (w - 1)) & ((1<<2) - 1))) >> 2;

    return fd4m3 + lm3d4;
};

int main(int argc, char* argv[]) {
    assert(threeforths(8) == 6);
    assert(threeforths(9) == 6);
    assert(threeforths(10) == 7);
    assert(threeforths(11) == 8);
    assert(threeforths(12) == 9);

    assert(threeforths(-8) == -6);
    assert(threeforths(-9) == -6);
    assert(threeforths(-10) == -7);
    assert(threeforths(-11) == -8);
    assert(threeforths(-12) == -9);
    return 0;                      
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

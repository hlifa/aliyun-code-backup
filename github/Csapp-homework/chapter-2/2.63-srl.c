/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.63-srl.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/28 18:07:58
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>

unsigned srl(unsigned x, int k) {
    // Perform shift arithmetically
    unsigned xsra = (int)x >> k;
    //return ~(((1<<k) - 1) << ((sizeof(int) << 3) - k)) & xsra;
    unsigned z = 2 << ((sizeof(int) << 3) - k - 1);
    return (z - 1) & xsra;
};

int main() {
    printf("srl(7, 2)=%u, 7U>>2=%u\n", srl(7, 2), 7U>>2);
    printf("srl(-1, 1)=%u, (unsigned)-1>>1=%u\n", srl(-1, 1), (unsigned)-1>>1);
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

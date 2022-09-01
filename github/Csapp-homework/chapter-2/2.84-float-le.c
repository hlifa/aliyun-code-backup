/***************************************************************************
 * 
 * Copyright (c 2020 GitHub, Inc.) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.84-float-le.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/16 09:57:52
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <stdio.h>
#include <assert.h>

unsigned f2u(float x) {
        return *(unsigned *)&x;
        
}

int float_le(float x, float y) {
    unsigned ux = f2u(x);
    unsigned uy = f2u(y);

    unsigned sx = ux >> 31;
    unsigned sy = uy >> 31;
    printf("sx=%u, sy=%u\n", sx, sy);

    return (sx > sy) || ((sx == sy) && ((sx == 0 && ux <= uy) || (sx == 1 && ux >= uy))) || (sx < sy && ux == 0 && ((uy << 1) == 0));                    
}


int main() {
        assert(float_le(+0.0, -0.0));
        assert(float_le(-0.0, +0.0));
        assert(float_le(0, 3));
        assert(float_le(-4.12, -0.0));
        assert(float_le(-4, 4));

        return 0;                
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

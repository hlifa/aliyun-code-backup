/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chapter-2/2.72-copy-int.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/01/03 17:25:43
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>
#include <string.h>

void copy_int(int val, void *buf, int maxbytes) {
    if (maxbytes > 0 && maxbytes >= sizeof(val)) {
        memcpy(buf, (void *)&val, sizeof(val));
    }
};

int main() {
    char buf[6] = {0};
    copy_int(0x12345678, buf, 6);
    printf("%.2x %.2x %.2x %.2x %.2x %.2x\n", buf[0], buf[1], buf[2], buf[3], buf[4], buf[5]);
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

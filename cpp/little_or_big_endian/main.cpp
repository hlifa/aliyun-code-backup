/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file little_or_big_endian/main.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/15 16:32:14
 * @version $Revision$ 
 * @brief 判断系统的大小端序
 *  
 **/

#include <iostream>

const int TEST_NUM = 0x61000041;

union TESTA {
    int num;
    char ca[4]; 
} testlittleendian;

void is_little_endian() {
    char *p_c = (char*)&TEST_NUM;
    std::cout << (*p_c) << std::endl; // 输出A, 则为小端序，输出a，则为大端序

    union TESTA ta;
    ta.num = 0x61000041;
    std::cout << ta.ca[0] << std::endl; // 输出A, 则为小端序，输出a，则为大端序
}

int main() {
    is_little_endian();
    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

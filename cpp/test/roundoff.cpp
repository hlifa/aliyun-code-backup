/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file test/roundoff.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/08 09:59:38
 * @version $Revision$ 
 * @brief 验证c/c++的除法采用的舍入类型: 1）向偶数舍入 2）向零舍入 3）向下舍入 4）向上舍入
 *  
 **/

#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "请指定测试值" << std::endl;
        return -1;
    }

    int testnum = atoi(argv[1]);
    std::cout << (testnum/2) << std::endl;

    return 0;
};

/* vim: set ts=4 sw=4 sts=4 tw=100 */

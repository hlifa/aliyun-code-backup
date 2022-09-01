/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file branch_execute/main.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/07 16:45:49
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <iostream>
#include <cstdio>
#include <ctime>
#include <sys/time.h>
#include <unistd.h>

int main() {
    int data[256] = {0};
    // 为数组赋值
    for (int j = 0; j < 256; ++j) {
        data[j] = j;
    }

    // if-statement
    struct timeval t1;
    gettimeofday(&t1, NULL);
    int sum = 0;
    for (int i = 0; i < 256; ++i) {
        if (data[i] >= 128) {
            sum += data[i];
        }
    }
    struct timeval t2;
    gettimeofday(&t2, NULL);
    long elapsed_time1 = (t2.tv_sec * 1000000 + t2.tv_usec) - (t1.tv_sec * 1000000 + t1.tv_usec);
    std::cout << "sum=" << sum << std::endl; 
    std::cout << "elapsed time1=" << elapsed_time1 << std::endl; 

    // bitwise
    struct timeval t11;
    gettimeofday(&t11, NULL);
    int sum1 = 0;
    for (int i = 0; i < 256; ++i) {
        int d = (data[i] - 128) >> 31;
        sum1 += ~d & data[i]; 
    }
    struct timeval t22;
    gettimeofday(&t22, NULL);
    long elapsed_time11 = (t22.tv_sec * 1000000 + t22.tv_usec) - (t11.tv_sec * 1000000 + t11.tv_usec);
    std::cout << "sum1=" << sum1 << std::endl; 
    std::cout << "elapsed time11=" << elapsed_time11 << std::endl; 

    std::cout << "(2-128)>>31: " << ((2-128)>>31) << std::endl;
    std::cout << "~(2-128)>>31 & 2: " << (~((2-128)>>31) & 2) << std::endl;

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

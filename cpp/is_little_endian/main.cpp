/***************************************************************************
 * 
 * Copyright (c) 2019 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file is_little_endian/main.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2019/12/28 15:35:13
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>

int is_little_endian() {
    int x = 1;
    return *((char *)&x);
};

int main() {
    std::cout << "is_little_endian: " << is_little_endian() << std::endl;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

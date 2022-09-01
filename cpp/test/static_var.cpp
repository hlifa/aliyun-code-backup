/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file static.var.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/07/09 16:18:38
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>
#include "static_var.h"

int main(void) {
    std::cout << "AGE=" << AGE << std::endl;
    std::cout << "P1::sName=" << P1::sName << std::endl;
    std::cout << "S1::sWei=" << S1::sWei << std::endl;
};

/* vim: set ts=4 sw=4 sts=4 tw=100 */

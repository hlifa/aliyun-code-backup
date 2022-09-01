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

extern int HEIGH;
extern int AGE;
extern P1 p1;
//extern S1;

int main(void) {
    std::cout << "HEIGH=" << HEIGH << std::endl;
    //std::cout << "AGE=" << AGE << std::endl;
    std::cout << "P1::sName=" << P1::sName << std::endl;
    //std::cout << "S1::sWei=" << S1::sWei << std::endl;
};

/* vim: set ts=4 sw=4 sts=4 tw=100 */

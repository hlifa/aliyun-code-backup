/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file lvalue_rvalue.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/17 17:42:14
 * @version $Revision$ 
 * @brief 
 *      左值、右值相关测试
 **/

#include <iostream>
using namespace std;

int g = 10;

int& setGlobal() {
    int a = 10;
    return a;
};

int main(void) {
    setGlobal() = 100;
    cout << g << endl;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

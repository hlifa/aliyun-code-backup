/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file class_test/return_refer.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/19 16:42:52
 * @version $Revision$ 
 * @brief 函数返回类型为引用的测试
 *  
 **/

#include <iostream>
using namespace std;

class Holder {
public:
    Holder() {cout << "Construtor\n";}
    ~Holder() {cout << "Destrutor\n";}
};

Holder& createHolder() {
    Holder * h = new Holder();
    return *h;
};

int main(void) {
    Holder& a = createHolder();
    delete &a;
} 

/* vim: set ts=4 sw=4 sts=4 tw=100 */

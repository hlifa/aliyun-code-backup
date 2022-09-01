/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file string_init.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/21 18:20:03
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s1("hello world");
    string s2{s1.begin(), s1.begin() + 5};
    string s3(s1.begin(), s1.begin() + 5);

    cout << s1 << endl << s2 << s3 << endl;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file string_op.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/22 09:11:34
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s = "hello world.";
    string tmp = "opnm";
    string::iterator iter = s.insert(s.begin(), tmp.cbegin(), tmp.cend());
    cout << s << endl;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

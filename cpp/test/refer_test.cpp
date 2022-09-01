/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file refer_test.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/18 17:00:41
 * @version $Revision$ 
 * @brief 测试引用的用法 
 *  
 **/

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int i = 10;
    int &j = i;
    cout << "j=" << j << endl;

    int k = 20;
    j = k;
    cout << "j=" << j << endl;

    i = 30;
    cout << "j=" << j << endl;
    
    j = 40;
    cout << "j=" << j << endl;
    cout << "i=" << i << endl;

    string&& s_rref = "hulifa";
    cout << s_rref << endl;
   
    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

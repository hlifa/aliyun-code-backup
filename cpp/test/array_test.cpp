/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file array_test.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/20 16:14:16
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>

using namespace std;

int main(void) {
    int ai[5] = {0, 1, 2, 3, 4};

    cout << ai << endl;
    cout << *ai << endl; 
    cout << &ai << endl;

    cout << (ai + 1) << endl;
    cout << *(ai + 1) << endl;
    cout << &ai + 1 << endl;


    int (*p)[5] = &ai;
    cout << "\n" << p << endl;
    cout << (p+1) << endl;

}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

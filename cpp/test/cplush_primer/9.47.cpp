/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file cplush_primer/9.47.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/24 09:33:54
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>
#include <string>

using namespace std;

const string nums = "0123456789";
const string alph = "abcdefghijklmnopqrstuvwsyzABCDEFGHIJKLMNOPQRSTUVWSYZ";

void find_all_nums_v2(string s) {
    string::size_type p = 0;
    p = s.find_first_not_of(alph, p);
    while (p != string::npos) {
        cout << s[p] << " ";
        p = s.find_first_not_of(alph, p + 1);
    }
    return;
}

int main(void) {
    string s = "ab2c3d7R4E6";
    string num = "0123456789";
    string alph = "abcdefghijklmnopqrstuvwsyzABCDEFGHIJKLMNOPQRSTUVWSYZ";
    string::size_type i = 0;
    cout << "find of numbers: " << flush;
    i = s.find_first_of(num, i);
    while (i != string::npos) {
        cout << s[i] << " ";
        i = s.find_first_of(num, i + 1);
    }
    cout << endl;

    cout << "find of nums_v2: ";
    find_all_nums_v2(s);
    cout << endl;

    cout << "find of alph:" << flush;
    i = 0;
    i = s.find_first_of(alph, i);
    while (i != string::npos) {
        cout << s[i] << " ";
        i = s.find_first_of(alph, i + 1);
    }
    cout << endl;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

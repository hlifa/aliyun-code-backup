/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file copy_vector_to_string.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/21 17:35:16
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    vector<char> vc = {'h', 'e', 'l', 'l', 'o'};
    string s(vc.begin(), vc.end());
    //1copy(vc.begin(), vc.end(), back_inserter(s));

    cout << s << endl;
    cout << s.capacity() << endl;
    cout << s.size() << endl;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

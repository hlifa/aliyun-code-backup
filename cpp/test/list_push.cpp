/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file list_push.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/21 11:07:50
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main(void) {
    list<int> l1;
    for (int i = 0; i != 4; ++i) {
        l1.push_front(i);
    }

    copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

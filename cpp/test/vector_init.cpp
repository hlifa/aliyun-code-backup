/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file vector_init.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/21 10:18:59
 * @version $Revision$ 
 * @brief 初始化 vector 的测试 
 *  
 **/

#include <iostream> 
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main(void) {
    list<int> l1 = {1, 2, 3};
    vector<double> v1(l1.begin(), l1.end());
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    
    vector<double> v2 = {1, 2, 3};
    vector<double> v3(v2);
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

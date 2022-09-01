/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file container_capacity.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/21 16:45:53
 * @version $Revision$ 
 * @brief 容器的容量、及元素个数测试
 *  
 **/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(void) {
    vector<int> v1 = {0, 1, 2, 3, 4};
    cout << "Capacity:" << v1.capacity() << endl;
    cout << "NumOfElements:" << v1.size() << endl; 
    
    v1.reserve(10);
    cout << "Capacity:" << v1.capacity() << endl;
    cout << "NumOfElements:" << v1.size() << endl; 

    v1.reserve(6);
    cout << "Capacity:" << v1.capacity() << endl;
    cout << "NumOfElements:" << v1.size() << endl; 

    v1.shrink_to_fit();
    cout << "Capacity:" << v1.capacity() << endl;
    cout << "NumOfElements:" << v1.size() << endl; 

    v1.push_back(5);
    cout << "Capacity:" << v1.capacity() << endl;
    cout << "NumOfElements:" << v1.size() << endl; 
    
    cout << endl;
    vector<int> v2;
    for (int i = 0; i != 5; ++i) {
        cout << "CapacityOfV2:" << v2.capacity() << endl;
        cout << "SizeOfV2:" << v2.size() << endl;
        v2.push_back(i);
    }

}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

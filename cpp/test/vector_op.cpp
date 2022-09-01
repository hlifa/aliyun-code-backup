/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file vector_op.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/21 15:29:34
 * @version $Revision$ 
 * @brief  对vector容器进行操作
 *  
 **/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(void) {
    vector<int> vec = {0, 1, 2, 3, 4, 5};
    auto iter = vec.begin();
    
    while (iter != vec.end()) {
        if (*iter % 2) {
            iter = vec.insert(iter, *iter);
            iter += 2;
        } else {
            iter = vec.erase(iter);
        }
    }

    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

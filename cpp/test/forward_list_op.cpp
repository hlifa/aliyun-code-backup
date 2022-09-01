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
#include <forward_list>
#include <iterator>
#include <algorithm>

using namespace std;

int main(void) {
    forward_list<int> li = {0, 1, 2, 3, 4, 5};
    auto iter = li.begin();
    auto prev = li.before_begin();
    while (iter != li.end()) {
        if (*iter % 2) {
            iter = li.insert_after(prev, *iter);
            prev = ++iter;
            iter++;
        } else {
            iter = li.erase_after(prev);
        }
    }


    copy(li.begin(), li.end(), ostream_iterator<int>(cout, " "));
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

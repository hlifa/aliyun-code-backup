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
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main(void) {
    list<int> li = {0, 1, 2, 3, 4, 5};
    auto iter = li.begin();
    while (iter != li.end()) {
        if (*iter % 2) {
            iter = li.insert(iter, *iter);
            //iter += 2; // 错误：list 迭代器不允许与一个整数相加或相减
            iter++;
            iter++;
        } else {
            iter = li.erase(iter);
        }
    }

    copy(li.begin(), li.end(), ostream_iterator<int>(cout, " "));
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

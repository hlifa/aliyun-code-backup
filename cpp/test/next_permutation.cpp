/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file next_permutation.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/15 15:16:29
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>
#include <algorithm>
#include <string>

int main(void) {
    std::string s = "aabcca";
    //std::sort(s.begin(), s.end());
    do {
        std::cout << s << std::endl;
    } while (std::next_permutation(s.begin(), s.end()));

    return 0;
}


/* vim: set ts=4 sw=4 sts=4 tw=100 */

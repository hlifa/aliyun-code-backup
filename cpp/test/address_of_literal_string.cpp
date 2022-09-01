/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file address_of_literal_string.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/17 22:00:02
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>
using namespace std;
int main(void) {
    const char (*ps)[6] = &"hello";
    cout << ps << endl;


    char cs[6] = "hello";
    cout << cs << endl;

    cs[0] = 'w';
    cs[1] = 'o';
    cout << cs << endl;


    char *pc = "hello";
    cout << pc << endl;

}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

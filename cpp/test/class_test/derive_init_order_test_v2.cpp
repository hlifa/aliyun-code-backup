/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file class_test/derive_init_order_test_v2.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/18 16:04:25
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <iostream>

using namespace std;

class X
{
        public:
            X() : mData(10) {cout << "X::X()" << endl;}
            X(int data) : mData(data) {cout << "X::X(int data)" << endl;}
            int mData;
                            
};
class XX : public X
{
        public:
            XX() {}
            XX(int data) : mData(data) {
                
            }
            int mN;
                    
};
class XXX : public XX
{
    
};
 
int main()
{
        XX xx(100);
        cout << xx.mData << endl;
        cout << xx.mN << endl;
                 
        XXX xxx;
        return 0;                
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

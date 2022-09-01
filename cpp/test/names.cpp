/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file names.c
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/07/09 10:41:38
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <cstdlib>
#include <cstring>

int a[1000] = {0, 1};
int b;
int addone() { 
    static int sInit = 10;
    static int sInc;
    sInc = 1;
    return ++sInit; 
};

// const variable
const int N = 100;

class C1 {
public:
    C1 () {};
    ~C1 () {};
private:
    int mData1;
    int mPointer1;
    static char sNames[100];
private:
    int mData2;
};
char C1::sNames[100] = "hulifa";

namespace garden {
namespace my {
char pear[40];
static double peach;
int mango = 1;
static long melon = 2001;

class C2 {
public:
    static int sAge;
};
int C2::sAge = 100;

} // my
} // garden

C1 &getC1() {
    static C1 c1;
    return c1;
};

C1 *getPC1() {
    static C1 *pc1 = new C1();
    return pc1;
};

int main(void) {
    int localarr[10000] = {1};
    int i = 3, j, *p;
    p = (int*)malloc(sizeof(i));
    memset(p, 0, sizeof(i));
    garden::my::pear[5] = i;
    garden::my::peach = 2.0 * garden::my::mango;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

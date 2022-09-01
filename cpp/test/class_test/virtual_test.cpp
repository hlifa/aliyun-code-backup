/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file class_test/virtual_test.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/19 09:37:50
 * @version $Revision$ 
 * @brief  测试 class 的多态特点
 *  
 **/

#include <iostream>

using namespace std;

class A {
public:
    A() { cout << "A: constructor" << endl; }
    ~A() { cout << "A: destructor" << endl; }

    virtual void print() { cout << "A: I am A" << endl; }
    void print2() { cout << "A: I am A, print2" << endl; }
//private:
//    A(const A&);
//    A& operator=(const A&);
};

class A1 : public A {
public:
    A1() { cout << "A1: constructor" << endl;  }
    ~A1() { cout << "A1: destructor" << endl;  }
    void print() { cout << "A1: I am A1" << endl;  }
};
class A2 : public A {
public:
    A2() { cout << "A2: constructor" << endl;  }
    ~A2() { cout << "A2: destructor" << endl;  }
    void print() { cout << "A2: I am A2" << endl;  }
};

int main(void) {
    A* a1 = new A1();
    //A* a2 = new A2();
    A1* a11 = new A1();
    A a111 = *a11;
    A* a1111 = a11;
    A1 b;
    A* b1 = &b;


    a1->print();
    //a1->print2();
    a11->print();
    a11->print2();
    a111.print();
    //a111.print2();
    a1111->print();
    b1->print();
    b1->print2();

    delete a1;
    //delete a2;
    delete a1111;
    cout <<"----\n"; 
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

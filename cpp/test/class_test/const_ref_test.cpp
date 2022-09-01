/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file class_test/const_ref_test.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/18 10:34:46
 * @version $Revision$ 
 * @brief 对 class 的成员变量使用 const-reference 实参赋初值的 测试 
 *  
 *
 **/

#include <iostream>
#include <string>

using namespace std;

class Coder {
public:
    Coder(const string& name, const int& age) : theName(name), theAge(age) {
        cout << "Name: " << theName << ", Age:" << theAge << endl;
    }

    void grewup() {
        theAge++;
    }

    void changeName() {
        theName = "Bill Gates";
    }

    void introduce() {
        cout << "Name: " << theName << ", Age:" << theAge << endl;
    }
private:
    string theName;
    int theAge;
};

int main(void) {
    string name = "Hu Jesse";
    int age = 28;
    Coder c(name, age);

    c.grewup();
    c.introduce();
    cout << "---Name: " << name << ", Age:" << age << endl;

    c.changeName();
    c.introduce();
    cout << "---Name: " << name << ", Age:" << age << endl;

    age = 30;
    c.introduce();

    name = "Jobs";
    c.introduce();
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

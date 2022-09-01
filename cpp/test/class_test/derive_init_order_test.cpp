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
 * @brief derived class & base class 的构造函数调用顺序问题 
 *  
 *
 **/

#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(const string& name, const int& age, const int& salary) : theName(name), theAge(age), theSalary(salary) {
        theName = name;
        theAge = age;
        theSalary = salary;
        cout << "[Base] Name: " << theName << ", Age:" << theAge << endl;
    }

    Person() {
        cout << "[Base-default] Name: " << theName << ", Age:" << theAge << endl;
    }

    void grewup() {
            theAge++;
            
    }

    void changeName() {
            theName = "Bill Gates";
            
    }

    void introduce() {
            cout << "[Base] Name: " << theName << ", Age:" << theAge << endl;
    }

public:
    string theName;
    int theAge;
};

class Coder : public Person {
public:
    Coder(const string& name, const int& age, const int& salary) : theName(name), theAge(age), theSalary(salary) {
        cout << "[Derived] Name: " << theName << ", Age:" << theAge << ", Salary:" << theSalary << endl;
    }

    //void introduce() {
     //   cout << "[Derived] Name: " << theName << ", Age:" << theAge << endl;
    //}
private:
    string theName;
    int theAge;
    int theSalary;
};

int main(void) {
    Coder c("HuJess", 28, 20000);
    c.introduce();
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

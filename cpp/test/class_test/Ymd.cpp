/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file class_test/Ymd.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/24 10:19:02
 * @version $Revision$ 
 * @brief 设计一个 class，有三个 unsigned 成员变量分别表示年、月、日，为其编写一个构造函数，接受一个  表示日期的string参数，
 *      要求能处理不同的日期格式，如January 1, 1990、1/1/1990、Jan 1 1990
 *  
 **/

#include <iostream>
#include <string>
#include <map>

using namespace std;

class YMD {
public:
    explicit YMD(const string &s) : 
        theYear(0),
        theMonth(0),
        theDay(0) {
        string::size_type p1 = 0, p2 = 0;
        p1 = s.find_first_not_of(sep); // 第一个非空格的字符
        p2 = s.find_first_of(sep, p1);
        theMonth = month_from_name(s.substr(p1, p2 - p1));

        p1 = s.find_first_not_of(sep, p2 + 1);
        p2 = s.find_first_of(sep, p1);
        theDay = (unsigned)stoi(s.substr(p1, p2 - p1));

        p1 = s.find_first_not_of(sep, p2 + 1);
        p2 = s.find_first_of(sep, p1);
        theYear = (unsigned)stoi(s.substr(p1, p2 - p1));


        // out of range
        // todo 
    }
    ~YMD () {  };

    void what_date() {
        cout << "Year:" << theYear <<  
            " Month:" << theMonth <<
            " Day:" << theDay << endl;
        return;
    }
private:
    unsigned month_from_name(const string& s) {
        if (s.empty()) return 0;
        if (isdigit(s[0])) return stoi(s);
        return Monthes.at(s);
    }
private:
    unsigned theYear;
    unsigned theMonth;
    unsigned theDay;
public:
    const static string sep; // 日期格式中分隔月、日、年的字符
    const static map<string, unsigned> Monthes;
};

const string YMD::sep = " /,";
const map<string, unsigned> YMD::Monthes = {
    {"January", 1},
    {"February", 2},
    {"March", 3},
    {"April", 4},
    {"May", 5},
    {"June", 6},
    {"July", 7}
};

int main(void) {
    string dates;
    cout << "请输入日期："<< flush;
    while (getline(cin, dates)) {
        YMD(dates).what_date();
        cout << "请输入日期：";
    }

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

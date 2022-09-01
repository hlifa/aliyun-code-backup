/***************************************************************************
 * 
 * Copyright (c) 2020 hulifa.cn, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file string_replace.cpp
 * @author work(hu2014jesse@gmail.com)
 * @date 2020/06/22 08:35:13
 * @version $Revision$ 
 * @brief 给定三个 string: s、oldValue、newValue，在 s 中查找所有出现的oldValue ，并替换为 newValue
 *  
 **/
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

void str_replace(string& s, const string& oldValue, const string& newValue) {
    size_t oldValue_size = oldValue.size();
    if (!oldValue_size || !newValue.size()) {
        return;
    }

    auto move = s.begin();
    while (distance(move, s.end()) >= distance(oldValue.begin(), oldValue.end())) {
        if (string{move, move + oldValue_size} == oldValue) {
            // 执行替换
            move = s.erase(move, move + oldValue_size);

        } else {

        }
    }
};

int main(void) {
    int n = 0;
    string tmp;
    string s, oldValue, newValue;
    cout << "s:" << flush;
    while (getline(cin, tmp)) {
        int i = n % 3;
        if (i == 0) {
            s = tmp;
            cout << "oldValue:";
        } else if (i == 1) {
            oldValue = tmp;
            cout << "newValue:";
        } else {
            newValue = tmp;
            cout << s << " " << oldValue << " " << newValue << endl; 
            
            // 执行替换
            str_replace(s, oldValue, newValue);
            cout << "Res:" << s << endl;


            cout << "\ns:";
        }
        ++n;
    }
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */

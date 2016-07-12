//
//  3_21.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/18.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  C++ Primer 练习3.21
//  使用迭代器重做练习3.16

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    
    cout << "v1: " << v1.size() << " ";
    for (auto i = v1.begin(); i != v1.end(); i++)
        cout << *i << " ";
    cout << endl;
    
    cout << "v2: " << v2.size() << " ";;
    for (auto i = v2.begin(); i != v2.end(); i++)
        cout << *i << " ";
    cout << endl;
    
    cout << "v3: " << v3.size() << " ";;
    for (auto i = v3.begin(); i != v3.end(); i++)
        cout << *i << " ";
    cout << endl;
    
    cout << "v4: " << v4.size() << " ";;
    for (auto i = v4.begin(); i != v4.end(); i++)
        cout << *i << " ";
    cout << endl;
    
    cout << "v5: " << v5.size() << " ";;
    for (auto i = v5.begin(); i != v5.end(); i++)
        cout << *i << " ";
    cout << endl;
    
    cout << "v6: " << v6.size() << " ";;
    for (auto i = v6.begin(); i != v6.end(); i++)
        cout << *i << " ";
    cout << endl;
    
    cout << "v7: " << v7.size() << " ";;
    for (auto i = v7.begin(); i != v7.end(); i++)
        cout << *i << " ";
    cout << endl;

    return 0;
}

//void Print ()
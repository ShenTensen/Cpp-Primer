//
//  6_42.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/20.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

string make_plural(size_t ctr, const string &word, const char &ending = 's')
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    cout << make_plural(2, "success") << endl;
    cout << make_plural(2, "failure") << endl;
    
    return 0;
}

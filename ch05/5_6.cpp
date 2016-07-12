//
//  5_6.cpp
//  ch05
//
//  Created by ShenTensen on 16/2/14.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int grade;
    string lettergrade;
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    
    while (cin >> grade && grade >= 0)
    {
        
//
//        (grade < 60) ? (lettergrade = scores[0])
//                    : (grade == 100) ? (lettergrade = scores[5])
//                    : ( lettergrade = scores[(grade - 50) / 10]);

        // 和上面被注释的代码作用相同
        lettergrade = (grade < 60) ? scores[0]
        : (grade == 100) ? scores[5]
        : scores[(grade - 50) / 10];
        
        lettergrade += (grade == 100 || grade < 60) ? ""
                                : (grade % 10 > 7) ? "+"
                                : (grade % 10 < 4) ? "-"
                                : "";
        // 还不熟悉条件运算符，也没用好条件运算符！
//        if (grade != 100)
//        {
//            (grade % 10 > 7) ? (lettergrade += "+")
//                             : ((grade % 10 < 4) ? (lettergrade += "-") : (cout << " ";) );
//        }
//        
        /*
        if (grade < 60)
            lettergrade = scores[0];
        else
        {
            lettergrade = scores[(grade - 50) / 10];        // 注意应当－50
            if (grade < 100)
            {
                if (grade % 10 > 7)
                    lettergrade += "+";
                else if (grade % 10 < 4)
                    lettergrade += "-";
            }
        }*/
        cout << lettergrade << endl;
    }
    
    return 0;
}
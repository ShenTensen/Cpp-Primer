//
//  5_5.cpp
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
        if (grade < 60)
            lettergrade = scores[0];
        else
        {
            lettergrade = scores[(grade - 50) / 10];        // 注意应当－50
            if (grade != 100)
            {
                if (grade % 10 > 7)
                    lettergrade += "+";
                else if (grade % 10 < 4)
                    lettergrade += "-";
            }
        }
        cout << lettergrade << endl;
    }

    return 0;
}
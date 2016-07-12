//
//  5_11.cpp
//  ch05
//
//  Created by ShenTensen on 16/2/18.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    char ch;
    // 统计元音字母和空格、换行和制表符数量
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned tableCnt = 0, spaceCnt = 0, returnCnt = 0;
    
    cout << "Enter char,if you want to end this program, enter ctrl+d :" << endl;
    
    while (cin >> std::noskipws >> ch)  // 不了解std::noskipws!看了别人在github上的答案
    {
        switch (ch)
        {
            case 'a': case 'A':
                ++aCnt;
                break;
            case 'e': case 'E':
                ++eCnt;
                break;
            case 'i': case 'I':
                ++iCnt;
                break;
            case 'o': case 'O':
                ++oCnt;
                break;
            case 'u': case 'U':
                ++uCnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tableCnt;
                break;
            case '\n':
                ++returnCnt;
                break;
                
        }
        cout << ch << endl;
    }
    
    cout << "aCnt = " << aCnt << "\teCnt = " << eCnt << "\tiCnt = " << iCnt
    << "\noCnt = " << oCnt << "\tuCnt = " << uCnt << "\ttableCnt = " << tableCnt
    << "\nreturnCnt = " << returnCnt << "\t\tspaceCnt = " << spaceCnt << endl;
    
    return 0;
}











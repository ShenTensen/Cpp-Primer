//
//  5_12.cpp
//  ch05
//
//  Created by ShenTensen on 16/2/18.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    char ch, lastCh = '\0';
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, flCnt = 0, ffCnt = 0, fiCnt = 0;       // 统计元音字母
    
    cout << "Enter char,if you want to end this program, enter ctrl+d:" << endl;
    
    while (cin >> ch)
    {
        switch (ch)
        {
            case 'a': case 'A':
                ++aCnt;
                break;
            case 'e': case 'E':
                ++eCnt;
                break;
            case 'i':
                if (lastCh == 'f')
                    ++fiCnt;        // no break!
            case 'I':
                ++iCnt;
                break;
            case 'o': case 'O':
                ++oCnt;
                break;
            case 'u': case 'U':
                ++uCnt;
                break;
            case 'l':
                if (lastCh == 'f')
                    ++flCnt;
                break;
            case 'f':
                if (lastCh == 'f')
                    ++ffCnt;
                break;
        }
        
        lastCh = ch;            // 记住上一个字母
    }
    
    // 对 '\t' 的机制很是费解，正如此程序在mac Xcode环境下！
    cout << "aCnt = " << aCnt << "\teCnt = " << eCnt << "\tiCnt = " << iCnt
    << "\noCnt = " << oCnt << "\tuCnt = " << uCnt << "\tflCnt: " << flCnt
    << "\nffCnt: " << ffCnt << "\tfiCnt: " << fiCnt << endl;
    
    return 0;
}











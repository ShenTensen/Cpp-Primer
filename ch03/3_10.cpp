// 练习3.10 

#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
    string line;
    cout << "Enter a string of characters including punctuation." << endl;
    while (getline(cin, line))
    {
        for (auto i : line)
            if (!ispunct(i))
                cout << i;
        cout << endl;
    }
    
    //    string line("Hello, world!");
    //    cout << line << endl;
    //    for (auto i : line)
    //        if (!ispunct(i))
    //            cout << i;
    //    cout << endl;
    // 
    //
    
    return 0;
}

		
//	line2[j] = '2'; 		//不可以下标的方式增加字符串元素！
//	line2[j + 1] = '\0';
//	cout << line2 << endl;
//	line = line2;
//	cout << line << endl;		


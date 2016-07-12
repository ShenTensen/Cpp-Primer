// 练习 3.4

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string str1, str2;
	cin >> str1 >> str2;
	// if (str1 > str2)					//比较字符串大小
	// 	cout << str1 << endl;
	// else 
	// 	cout << str2 << endl;	
 	if (str1.size() > str2.size())		//比较字符串长度
 		cout << str1 << endl;
 	else
 		cout << str2 << endl;

	return 0;	
}

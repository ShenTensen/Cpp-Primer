// 3.6 
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
	string line("Hello, world! By ShenTensen!");
	cout << line << endl;
	for (char &c : line)
		c = 'X';
	cout << line << endl;		
	
	return 0;
}


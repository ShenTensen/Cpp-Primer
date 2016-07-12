// Á·Ï°3.8 

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
/*	for (int i = 0; i < line.size(); i++)
		line[i] = 'X'; 
*/
	int i = 0;
	while (i < line.size())
		line[i++] = 'X';			
	cout << line << endl;		
	
	return 0;
}


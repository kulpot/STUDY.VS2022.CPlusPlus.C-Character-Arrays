// ------------------------------------- C++ Character Arrays -------------------------------
// ref link:https://www.youtube.com/watch?v=Qvw2rNzUxDU&list=PLRwVmtr-pp056ahRbFrYbeAnIu2qvXPFe&index=6

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

void main()
{
	char chars[] = "kulpot";		// implicit null terminator \0 which is the end of character string
	string s = "kulpot";	// character array
	cout << s << endl;
}
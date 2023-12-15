// ------------------------------------- C++ Character Arrays -------------------------------
// ref link:https://www.youtube.com/watch?v=Qvw2rNzUxDU&list=PLRwVmtr-pp056ahRbFrYbeAnIu2qvXPFe&index=6

#include <iostream>
//#include <string>
#include <cstring>
//using std::string;
using std::cout;
using std::endl;

void main()
{
	//char chars[] = "kulpot";		// implicit null terminator \0 which is the end of character string
	
	char* chars = new char[6];
	strcpy(chars, "Kulpot");		// strcpy string copy
	chars[0] = 'q';
	cout << strlen(chars) << endl;
	char* chars2 = chars;			// * pointer 
	//chars2[0] = 'q';				
	cout << chars << endl;
	cout << chars2 << endl;
	delete chars;
	
	//char *chars = "kulpot";
	//cout << chars << endl;
	
	//string s = "kulpot";	// character array
	//cout << s << endl;
}
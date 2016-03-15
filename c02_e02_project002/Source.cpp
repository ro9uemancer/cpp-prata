// name: c02_e02_project002
// tags: #cin #converter
// author: ro9uemancer

#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	int miles;

	cout << "Please enter number of miles: ";
	cin >> miles;
	cout << miles << " miles is " << miles * 1852 << " meters." << endl;

	_getch();
	return 0;
}
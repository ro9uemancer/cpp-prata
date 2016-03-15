// name: c02_e03
// description: functions
// author: ro9uemancer

#include <iostream>
#include <conio.h>

using namespace std;

void shout();
void shout2();

int main()
{
	shout();
	shout();
	shout2();
	shout2();

	_getch();
	return 0;
}

void shout()
{
	cout << "Entliczek pentliczek" << endl;
}

void shout2()
{
	cout << "Czerwony stoliczek" << endl;
}
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main ()
{
	int count, randnum;
	for (count=1;count<=20;count++)
	{		randnum = rand();
		cout << randnum << "\n.";
	}
	getch ();
	return 0;
}

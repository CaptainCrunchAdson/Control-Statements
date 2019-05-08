#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main ()
{
	char a;
cout << "Enter a letter: "; cin >> a;
switch (a)

{
case 'A':
case 'a':
	cout << "You're Adorable!";
	break;
case 'B':
case 'b':
	cout << "You're so beautiful!";
	break;
case 'C':
case 'c':
	cout << "You're so cute & full of charm!";
		break;
}

getch ();
return 0;

}
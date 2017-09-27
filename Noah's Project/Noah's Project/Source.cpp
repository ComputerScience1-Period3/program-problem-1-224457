/*
Noah Bekele-92120172
Assignment Name :*
/Breif Description of the Assignment
*/
// Libraries
#include<iostream>// gives access to cin, cout, endl, <<, >>, boolalapha, noboolalpha
#include<conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
// Functions()
void pause() {
	cout << "Press any key to continue . . . ";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//MAIN
void main() {
	//Define and Assign your variable(s)
	int PNumber = 3;
	//Display Text
	cout << "Noah Bekele, Period Number " << PNumber << endl;
	cout << "Hello World" << PNumber << endl; 
	pause(); //pauses to see the displayed text
}
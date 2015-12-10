#include <iostream>
#include "FunctionLib.h"

using namespace std;

int main(){

	int selection;
	do
	{
		cin >> selection;
		switch (selection)
		{
		case 1:
			cout << "Computer Programming In C++\n";
			cout << "\n";
			break;

		case 2:
			cout << "Java Programming\n";
			cout << "\n";
			break;
		case 3:
			cout << "Android Programming\n" ;
			cout << "\n";
			break;

		case 4:
			cout << "iOS Programming\n";
			cout << "\n";
			break;

		case 5:
			cout << "Bye.\n";
			break;

		default: cout << selection << " is not a valid choice.\n";
			cout << endl;
		}

	}while (selection != 5 );

	return 0;
}
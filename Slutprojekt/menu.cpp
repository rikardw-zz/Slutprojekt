#include <iostream>
#include "menu.h"
#include "constants.h"

using namespace std;

void selectionMenu(void){
		cout << " **********THE LISTPROGRAM***********" << endl;
		cout << " ====================================" << endl;
		cout << " 1. See list " << endl;
		cout << " 2. Add person" << endl;
		cout << " 3. Remove person" << endl;
		cout << " 4. Randomize list" << endl;
		cout << " 5. Sort list" << endl;
		cout << " 6. Search" << endl;
		cout << " 7. Open list" << endl;
		cout << " 8. Save list" << endl;
		cout << endl;
		cout << " 0. Exit " << endl;
		cout << " ====================================" << endl;
		cout << " Enter your selection: ";
		int selection;
	do
	{
		cin >> selection;
		switch (selection)
		{
		case 1:
			cout << "See list" << endl;
			break;

		case 2:
			cout << "Add person" << endl;
			break;
		case 3:
			cout << "Rename person" << endl;
			break;

		case 4:
			cout << "Randomize list" << endl;
			break;

		case 5:
			cout << "Sort list" << endl;
			break;

		case 6:
			cout << "Search" << endl;
			break;

		case 7:
			cout << "Open list" << endl;
			break;

		case 8:
			cout << "Save list" << endl;
			break;
			
		case 0:
			cout << "Bye.\n";
			break;

		default: cout << selection << " is not a valid choice.\n";
			cout << endl;
		}

	}while (selection != 0 );
}
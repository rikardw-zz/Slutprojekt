#include <iostream>
#include <vector>
#include "menu.h"
#include "addPerson.h"
#include "saveList.h"
#include "showList.h"
#include "openList.h"
#include "sortList.h"

using namespace std;

void selectionMenu(vector<person> personVector) {
	int selection;
	
	do
	{
		system("CLS");
		printLogo();
		menuItems();
		cin >> selection;
		switch (selection)
		{
		case 1:
			system("CLS");
			printList(personVector);
			system("pause");
			break;

		case 2:
			system("CLS");
			cin.ignore(1000, '\n');
			cout << "Add person" << endl;
			personVector = addPersonToList(personVector);
			break;
		case 3:
			cout << "Rename person" << endl;
			// renamePerson(oldName, newName, personVector)
			break;

		case 4:
			cout << "Randomize list" << endl;
			// randomizeList(personVector)
			break;

		case 5:
			cout << "Sort list" << endl;/*
			personVector = sortList(personVector);*/
			break;

		case 6:
			cout << "Search" << endl;
			break;

		case 7:
			system("CLS");
			cout << "Open list" << endl;
			personVector = readFromFile(personVector);
			system("pause");
		break;

		case 8:
			system("CLS");
			cout << "Save list" << endl;
			saveToFile(personVector);
			system("pause");
			break;
			
		case 0:
			cout << "Bye.\n";
			break;

		default: cout << selection << " is not a valid choice." << endl;
			system("pause");
		}

	}while (selection != 0 );
}

void menuItems(){
	cout << endl;
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

}

void printLogo(){
	
	cout << "     ============================" << endl; 
	cout << "     |L I S T  G E N E R A T O R|" << endl;
	cout << "     ============================" << endl; 

}
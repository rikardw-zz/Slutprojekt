#include <iostream>
#include <vector>
#include "menu.h"
#include "addPerson.h"
#include "saveList.h"
#include "showList.h"
#include "openList.h"
#include "sortList.h"
#include "searchList.h"
#include "removePerson.h"

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
			cout << "***SEE LIST***" << endl;
			printList(personVector);
			system("pause");
			break;

		case 2:
			system("CLS");
			cout << "***ADD PERSON***" << endl;
			cin.ignore(1000, '\n'); //"flushar" funktionen så CLS fungerar i det här fallet, skapade problem annars
			personVector = addPersonToList(personVector);
			break;
		case 3:
			system("CLS");
			cout << "***REMOVE PERSON***" << endl;
			personVector = removePerson(personVector);
			system("pause");
			
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
			system("CLS");
			cout << "***SEARCH***" << endl;
			searchSignature(personVector);
			system("pause");
			break;

		case 7:
			system("CLS");
			cout << "***OPEN LIST***" << endl;
			personVector = readFromFile(personVector);
			system("pause");
		break;

		case 8:
			system("CLS");
			cout << "***SAVE LIST***" << endl;
			saveToFile(personVector);
			system("pause");
			break;
			
		case 0:
			cout << "gbye";
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
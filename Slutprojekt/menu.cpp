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
			cout << "***ADD PERSON***" << endl;
			cin.ignore(1000, '\n'); //"flushar" funktionen så CLS fungerar i det här fallet, skapade problem annars
			personVector = addPersonToList(personVector);
			break;

		case 2:
			system("CLS");
			cout << "***SEE LIST***" << endl;
			printList(personVector);
			system("pause");
			break;

		case 3:
			system("CLS");
			cout << "***SEARCH***" << endl;
			searchSignature(personVector);
			system("pause");
			break;

		case 4:
			system("CLS");
			cout << "***REMOVE PERSON***" << endl;
			personVector = removePerson(personVector);
			system("pause");
			break;

		case 5:
			cout << "***SORT LIST BY NAME***" << endl;
		//	sortType sort = name;
			personVector = sortList(personVector, 1);
			break;

		case 6:
			cout << "***SORT LIST BY SIGNATURE***" << endl;
			personVector = sortList(personVector, 2);
			break;

		case 7:
			cout << "***SORT LIST BY HEIGHT***" << endl;
			personVector = sortList(personVector, 3);
			break;
		
		case 8:
			system("CLS");
			cout << "***RANDOMIZE LIST***" << endl;
			//saveToFile(personVector);
			system("pause");
			break;

		case 9:
			system("CLS");
			cout << "***SAVE LIST***" << endl;
			saveToFile(personVector);
			system("pause");
			break;

		case 10:
			system("CLS");
			cout << "***OPEN LIST***" << endl;
			personVector = readFromFile(personVector);
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
	cout << " 1.  Add person " << endl;
	cout << " 2.  Show list" << endl;
	cout << " 3.  Search list" << endl;
	cout << " 4.  Remove person" << endl;
	cout << " 5.  Sort by name" << endl;
	cout << " 6.  Sort by signature" << endl;
	cout << " 7.  Sort by height" << endl;
	cout << " 8.  Randomize list" << endl;
	cout << " 9.  Save list to file" << endl;
	cout << " 10. Read list from file" << endl;
	cout << " 0.  Exit " << endl;
	cout << " ====================================" << endl;
	cout << " Enter your selection: ";

}

void printLogo(){
	
	cout << "     ============================" << endl; 
	cout << "     |L I S T  G E N E R A T O R|" << endl;
	cout << "     ============================" << endl; 

}
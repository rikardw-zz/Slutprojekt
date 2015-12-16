#include <iostream>
#include <string>
#include "constants.h"

using namespace std;

person addPerson(string foreName, string lastName, string signature, double length){
	person createdPerson = {
		foreName,
		lastName,
		signature,
		length	
	};
	cout << "Your forename is:" << createdPerson.foreName;
	return createdPerson;
}

void addPersonToList(void){
	string foreName, lastName, signature;
	double length;
	cout << "Forename: ";
	cin >> foreName;
	cout << "Lastname: ";
	cin >> lastName;
	cout << "Lenght: ";
	cin >> length;
	signature = "xxXX";
	addPerson(foreName, lastName, signature, length);
}
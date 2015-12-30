#include <iostream> 
#include <string> // string-klassen
#include <vector>
#include <algorithm>
#include <iomanip> 
#include "constants.h"

using namespace std;

vector<person> removePerson(vector<person> personVector){
	string deletePerson;
	bool found = false;
	cout << "Please enter the signature of the user you want to remove" << endl;
	cin >> deletePerson;
	system("CLS");
	for (size_t i=0; i < personVector.size(); i++){
		if (deletePerson == personVector[i].signature){
			personVector.erase (personVector.begin()+i);
			
			cout << "Person taken care of." << endl;
			found = true;
		}
	}
	if (found == false){
		cout << "No person with that signature found." << endl;
	}
	return personVector;
}
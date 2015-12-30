#include <iostream> 
#include <string> // string-klassen
#include <vector>
#include <algorithm>
#include <iomanip> 
#include "constants.h"

using namespace std;

void searchSignature(vector<person> personVector){
	string signatureSearch;
	bool found = false;
	cout << "Please enter the signature of the user youre looking for" << endl;
	cin >> signatureSearch;
	system("CLS");
	for (size_t i=0; i < personVector.size(); i++){
		if (signatureSearch == personVector[i].signature){
			cout << "Person found!" << endl;

			cout << left << setw(5) << "Nr";
			cout << left << setw(10) << "Sign";
			cout << left << setw(30) << "Name";
			cout << right << setw(10) << "Lenght [m]" << endl;

			cout << left << setw(5) << i+1;
			cout << left << setw(10) << personVector[i].signature;
			cout << left << setw(30) << personVector[i].foreName + " " + personVector[i].lastName;
			cout << right << setw(10) << fixed << setprecision(2) << personVector[i].length;
			cout << endl;
			found = true;
		}
	}
	if (found == false){
		cout << "No person with that signature found." << endl;
	}
}
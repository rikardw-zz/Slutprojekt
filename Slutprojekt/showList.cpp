#include <iostream>
#include <string>
#include <iomanip> // setw m.fl
#include "constants.h"
#include "showList.h"


using namespace std;

void printList(vector<person> personVector){
	cout << "*** LIST ***" << endl;
	//cout << fixed << setprecision(2);

		cout << "People in list: " << personVector.size() << endl << endl;
		cout << left << setw(5) << "Nr";
		cout << left << setw(10) << "Sign";
		cout << left << setw(30) << "Name";
		cout << right << setw(10) << "Lenght [m]" << endl;
		for (size_t i=0; i < personVector.size(); i++){
			cout << left << setw(5) << i+1;
			cout << left << setw(10) << personVector[i].signature;
			cout << left << setw(30) << personVector[i].foreName + " " + personVector[i].lastName;
			cout << right << setw(10) << personVector[i].length;
			cout << endl;
		}
}
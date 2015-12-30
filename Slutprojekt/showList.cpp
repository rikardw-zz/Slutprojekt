#include <iostream>
#include <string>
#include <iomanip> // setw m.fl
#include "constants.h"
#include "showList.h"


using namespace std;

void printList(vector<person> personVector){
	cout << endl;
		cout << "People in list: " << personVector.size() << endl << endl;
		cout << left << setw(5) << "Nr";
		cout << left << setw(10) << "Sign";
		cout << left << setw(30) << "Name";
		cout << right << setw(10) << "Lenght [m]" << endl;
		
		int counter = 0;
		
		for (size_t i=0; i < personVector.size(); i++){
			counter++;
			cout << left << setw(5) << i+1;
			cout << left << setw(10) << personVector[i].signature;
			cout << left << setw(30) << personVector[i].foreName + " " + personVector[i].lastName;
			cout << right << setw(10) << fixed << setprecision(2) << personVector[i].length;
			cout << endl;
			if (counter == 20){
				system("pause");
				counter = 0;
			}
		}
}
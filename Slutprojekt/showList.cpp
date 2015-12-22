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
		cout << "Nr" << setw(6) << "Sign" << setw(12) << "Name" << setw(30) << "Lenght [m]" << endl;
		for (size_t i=0; i < personVector.size(); i++)
			cout << i+1 << "." << setw(8) << personVector[i].signature << setw(10) << personVector[i].foreName << " " << personVector[i].lastName << setw(22) << personVector[i].length << endl;
}
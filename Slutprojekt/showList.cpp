#include <iostream>
#include <string>
#include "constants.h"
#include "showList.h"


using namespace std;

void printList(vector<person> personVector){
	cout << endl << endl << "The content in the vector:" << endl;
	//cout << fixed << setprecision(2);
	for (size_t i=0; i < personVector.size(); i++)
		cout << i+1 << " " << personVector[i].foreName << " " << personVector[i].lastName << " " << personVector[i].length << " "  << personVector[i].signature << endl;
}
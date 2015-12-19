#include <iostream> // cout
#include <fstream> // filhantering
#include <string> // string-klassen
#include <vector> // std::vector
#include <iomanip> // setw m.fl
#include "constants.h"
#include "openList.h"

using namespace std;

vector<person> readFromFile(string fileName, vector<person> personVector)
{ 
	ifstream inFile(fileName); // Öppna filen med namnet fileName
	string temp = " "; // Temporär variabel för läsning från fil
	personVector.clear(); // Töm vetorn innan läsnigen påbörjas
	if(inFile.is_open()) {
		while(inFile >> temp) // Läs från fil till temp så länge det finns tal
			cout << temp << endl;
		//	personVector.push_back(temp); // Lägg in i vectorn
	
	}// Kolla om filen är öppen
	inFile.close(); // Stäng filen
	return personVector;
}
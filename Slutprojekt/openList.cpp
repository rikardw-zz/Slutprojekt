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
	ifstream inFile(fileName); // �ppna filen med namnet fileName
	string temp = " "; // Tempor�r variabel f�r l�sning fr�n fil
	personVector.clear(); // T�m vetorn innan l�snigen p�b�rjas
	if(inFile.is_open()) {
		while(inFile >> temp) // L�s fr�n fil till temp s� l�nge det finns tal
			cout << temp << endl;
		//	personVector.push_back(temp); // L�gg in i vectorn
	
	}// Kolla om filen �r �ppen
	inFile.close(); // St�ng filen
	return personVector;
}
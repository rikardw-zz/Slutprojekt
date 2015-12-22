#include <iostream> // cout
#include <fstream> // filhantering
#include <string> // string-klassen
#include <vector> // std::vector
#include <iomanip> // setw m.fl
#include "constants.h"
#include "openList.h"
#include "addPerson.h"

using namespace std;

vector<person> readFromFile(vector<person> personVector)
{ 
	string fileName;
	cout << "Please enter a file name" << endl;
	cin >> fileName;
	ifstream inFile(fileName); // �ppna filen med namnet fileName
	string personInfo = " "; // Tempor�r variabel f�r l�sning fr�n fil
	personVector.clear(); // T�m vetorn innan l�snigen p�b�rjas
	if(inFile.is_open()) {
		while(getline(inFile, personInfo)){
			string foreName;
			string lastName;
			string signature;
			float length;

			int delimNumber = personInfo.find(DELIM);

			foreName = personInfo.substr(0, delimNumber);
			personInfo = personInfo.substr(delimNumber+1);
			delimNumber = personInfo.find(DELIM); //h�mtar informaationen igen, dock nu utan f�rnamn
			lastName = personInfo.substr(0, delimNumber);
			personInfo = personInfo.substr(delimNumber+1);
			delimNumber = personInfo.find(DELIM); //h�mtar informationen igen, dock nu utan f�rnamn,efternamn
			length = stof(personInfo.substr(0, delimNumber));
			personInfo = personInfo.substr(delimNumber+1);
			delimNumber = personInfo.find(DELIM); //h�mtar informationen igen, dock nu utan f�rnamn, efternamn och l�ngd
			signature = personInfo.substr(0, delimNumber);
			
			personVector.push_back(addPerson(foreName, lastName, signature, length));
		
		} // L�s fr�n fil till temp s� l�nge det finns tal
			
		//	personVector.push_back(temp); // L�gg in i vectorn
	
	}// Kolla om filen �r �ppen
	inFile.close(); // St�ng filen
	return personVector;
}////int getHours(string time){
//	int kolon = time.find(':');
//	return stoi(time.substr(0, kolon));
//}
//int getMinutes(string time){
//	int kolon = time.find(':');
//	return stoi(time.substr(kolon+1));
//}

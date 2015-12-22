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
	ifstream inFile(fileName); // Öppna filen med namnet fileName
	string personInfo = " "; // Temporär variabel för läsning från fil
	personVector.clear(); // Töm vetorn innan läsnigen påbörjas
	if(inFile.is_open()) {
		while(getline(inFile, personInfo)){
			string foreName;
			string lastName;
			string signature;
			float length;

			int delimNumber = personInfo.find(DELIM);

			foreName = personInfo.substr(0, delimNumber);
			personInfo = personInfo.substr(delimNumber+1);
			delimNumber = personInfo.find(DELIM); //hämtar informaationen igen, dock nu utan förnamn
			lastName = personInfo.substr(0, delimNumber);
			personInfo = personInfo.substr(delimNumber+1);
			delimNumber = personInfo.find(DELIM); //hämtar informationen igen, dock nu utan förnamn,efternamn
			length = stof(personInfo.substr(0, delimNumber));
			personInfo = personInfo.substr(delimNumber+1);
			delimNumber = personInfo.find(DELIM); //hämtar informationen igen, dock nu utan förnamn, efternamn och längd
			signature = personInfo.substr(0, delimNumber);
			
			personVector.push_back(addPerson(foreName, lastName, signature, length));
		
		} // Läs från fil till temp så länge det finns tal
			
		//	personVector.push_back(temp); // Lägg in i vectorn
	
	}// Kolla om filen är öppen
	inFile.close(); // Stäng filen
	return personVector;
}////int getHours(string time){
//	int kolon = time.find(':');
//	return stoi(time.substr(0, kolon));
//}
//int getMinutes(string time){
//	int kolon = time.find(':');
//	return stoi(time.substr(kolon+1));
//}

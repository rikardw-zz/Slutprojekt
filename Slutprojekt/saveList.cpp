#include <iostream> // cout
#include <fstream> // filhantering
#include <string> // string-klassen
#include <vector> // std::vector
#include <iomanip> // setw m.fl
#include "constants.h"
using namespace std;
void saveOnFile(string fileName)
{
	ofstream outFile(fileName); // �ppna filen med namnet fileName
	if(outFile.is_open()) // Kolla om filen gick att �ppna
		outFile << "HEJ" << endl; // Skriv ett tal per rad i filen
		outFile.close(); // St�ng filen
}

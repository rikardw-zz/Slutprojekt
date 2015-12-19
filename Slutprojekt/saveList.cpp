#include <iostream> 
#include <fstream> // filhantering
#include <string> // string-klassen
#include <vector>
#include <iomanip> // setw m.fl
#include "constants.h"
using namespace std;
void saveToFile(string fileName, vector<person> personVector) {  
	ofstream outFile(fileName); 
	
	if(outFile.is_open()){
		for (size_t i = 0; i < personVector.size(); i++){
			outFile << personVector[i].foreName << " " << personVector[i].lastName << " " << personVector[i].length << " "  << personVector[i].signature << endl;
		} 
	}
	outFile.close();
}  
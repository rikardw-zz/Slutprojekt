#include <string>
#include "constants.h"

using namespace std;

newPerson addPerson(string foreName, string lastName, string signature, double length){
	newPerson createdPerson = {
		foreName,
		lastName,
		signature,
		length	
	};
	return createdPerson;
}
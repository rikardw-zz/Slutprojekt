#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "constants.h"

using namespace std;

bool compareNames(person person1, person person2){
	if (person1.lastName != person2.lastName){
		return person1.lastName < person2.lastName;
	}
	
	return person1.foreName < person2.foreName;
}

vector<person> sortList(vector<person> personVector, int sortType){
	switch (sortType)
	{
	case 1:
		sort(personVector.begin(), personVector.end(), compareNames);
		return personVector;
		break;

	case 2:
		break;

	case 3:
		break;

	}
}
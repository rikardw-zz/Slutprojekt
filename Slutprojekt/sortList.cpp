#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "constants.h"

using namespace std;

bool compareNames(person person1, person person2){
	string p1LastName = person1.lastName;
	transform(p1LastName.begin(), p1LastName.end(), p1LastName.begin(), ::tolower);
	string p2LastName = person2.lastName;
	transform(p2LastName.begin(), p2LastName.end(), p2LastName.begin(), ::tolower);

	string p1ForeName = person1.foreName;
	transform(p1ForeName.begin(), p1ForeName.end(), p1ForeName.begin(), ::tolower);
	string p2ForeName = person2.foreName;
	transform(p2ForeName.begin(), p2ForeName.end(), p2ForeName.begin(), ::tolower);

	if (p1LastName != p2LastName){
		bool isLess;
		isLess = p1LastName < p2LastName;
		return isLess;
	}
	
	return p1ForeName < p2ForeName;
}

bool compareSignatures(person person1, person person2){

	return person1.signature < person2.signature;
}

bool compareLength(person person1, person person2){

	return person1.length > person2.length;
}

vector<person> sortList(vector<person> personVector, int sortType){
	switch (sortType)
	{
	case 1:
		sort(personVector.begin(), personVector.end(), compareNames);
		break;

	case 2:
		sort(personVector.begin(), personVector.end(), compareSignatures);
		break;

	case 3:
		sort(personVector.begin(), personVector.end(), compareLength);
		break;
	}
	return personVector;
}
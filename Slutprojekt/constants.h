using namespace std;

const struct person
{
	string foreName;
	string lastName;
	string signature;
	float length;
};

const char DELIM = '|';

const enum sort_type {SORT_NAME, SORT_SIGNATURE, SORT_LENGTH};
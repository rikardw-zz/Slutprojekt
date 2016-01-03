using namespace std;

const struct person
{
	string foreName;
	string lastName;
	string signature;
	float length;
};

const char DELIM = '|';

enum sortType {name, signature, height};
#include <iostream>
using namespace std;
//Datatype Modifiers 

int main() {
	//long long
	cout << sizeof (int) << endl; //4 bytes
	cout << sizeof(long long int) << endl; //8 bytes

	//short
	cout << sizeof(short int) << endl; //2 bytes
	//can be used when value of range is small

	//signed
	signed int x = -10;
	cout << x << endl; //output = -10

	//unsigned
	unsigned int y = -12;
	cout << y << endl;  //output = 4294967284 (negative value converted to large positive due to unsigned type)

	return 0;
}
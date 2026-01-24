#include <iostream>
using namespace std;

int main() {
	//bitwise &-and
	int a = 4, b = 8;
	cout << (a & b) << endl; //output - 0


	//bitwise |-or
	int x = 4, y = 8;
	cout << (x | y) << endl; //output - 12


	//bitwise ^-xor
	int g = 4, f = 8;
	cout << (g ^ f) << endl; //output - 12

	
	//Bitwise << - Left shift operator:it shifts the binary numbers left side by two place
	// Left shift: x << n  → x * (2^n)
	cout << (10 << 2) << endl;  //output - 40


	//Bitwise >> - Right shift operator:it shifts the binary numbers right side by two place
	// Right shift: x >> n → x / (2^n)
	cout << (10 >> 2) << endl; //output - 2
	
	return 0;
}
#include <iostream>
using namespace std;
//pass by value
int sum (int a, int b) {
	a = a + 10;
	b = b + 10;
	return a + b;
 }

int main() {
	int a = 4, b = 5;
	cout << sum(a , b) << endl;
	cout << a << endl;
	cout << b << endl;
	return 0;
}
//here output will be 29
//but the real value of a and b will be 4 and 5 in the memory 
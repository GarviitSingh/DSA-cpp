#include <iostream>
#include <deque>
using namespace std;
//Deque - deque<int>d = {1,2,3}; - double ended queue 

int main() {
	deque<int> d = {1,2,3,4,5};
	for (int val : d) {
		cout << val << " ";

	}
	//pushback & pushfront
	//emplaceback & emplacefront
	//popback &popfront
	// these will also work same like in list 
	cout << endl;

	cout << d[2] << endl;

	return 0;
}
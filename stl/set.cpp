#include <iostream>
#include <set>
//Set - set<int> s;
//it ignores the duplicate value

using namespace std;

int main() {
	set<int> s;

	s.insert(1);
	s.insert(2);
	s.insert(5);
	s.insert(3);

	s.insert(2);
	s.insert(5);
	s.insert(3);
	//Lower Bound - value should not be less than key
	cout << "Lower Bound= " << *(s.lower_bound(3)) << endl; // 3
	//Upper Bound - value should be greater than key
	cout << "Upper Bound= " << *(s.upper_bound(3)) << endl; // 5
	for (auto val : s) {
		cout << val << " " ;

	}
	cout << endl;
	return 0;
}
//functions- count,erase,find,size,empty same like map
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//Reverse - reverse(v.begin(),v.end())
int main() {
	vector<int> vec = { 5, 4, 3, 2, 1 };
	reverse(vec.begin(), vec.end());

	//reverse for a range
	reverse(vec.begin() + 1, vec.begin() + 3); // 1,3,2,4,5

	for (auto val : vec) {
		cout << val << endl; // 1,2,3,4,5 
	}


	cout << endl;
	return 0;
}

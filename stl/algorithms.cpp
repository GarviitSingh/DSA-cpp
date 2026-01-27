#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//Sorting - sort (arr,arr+n)
//By default in ascending order
int main() {
	int arr[4] = { 3, 5, 8, 2 };
	sort(arr, arr + 4); 
	for (int val : arr) {
		cout << val << " \n" ;  // 2,3,5,8
	}
	
//can sort vector also
	vector<int> vec = { 8, 1, 4, 14 };
	sort(vec.begin(), vec.end());

	for (int val : vec) {
		cout << val << " \n" ;  //1,4,8,14
	}

//sorting in descending order
	int arr1[4] = {1, 5, 3, 15 };
	sort(arr1, arr1 + 4, greater<int>()); // this greater used for descending order

	for (int val : arr1) {
		cout << val << " \n" ;  //15,5,3,1
	}


	cout << endl;
	return 0;
}
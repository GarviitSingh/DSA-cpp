#include <iostream>
#include <vector>
using namespace std;
//Pair - pair <int, int>p = {3,5};

int main() {
	pair <char, int>p = {'a', 5};
		
	cout << p.first << endl;  //to access first value
	cout << p.second << endl; //to access second value
	
	//can make pair in pair
	pair <int, pair<string, int >> pa = { 8,{"garvv", 9} };
	cout << pa.first << endl;  // 8
	cout << pa.second.first << endl; // garvv
	cout << pa.second.second << endl; // 9

	// pair in vectors
	vector <pair<int, int>> vec = { {2,5}, {5,6}, {6,9}, {9,14} };

	// insering values in vector as pair
	vec.push_back({ 14,19 }); //inserts the value assuming we already created pair  
	vec.emplace_back(14, 19); //in-place objects create 


	for (auto p : vec) {
		cout << p.first << " " << p.second << endl;
	}
	

	cout << endl;

	return 0;
}
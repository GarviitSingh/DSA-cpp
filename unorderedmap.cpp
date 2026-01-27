#include <iostream>
#include <unordered_map>
using namespace std;
//Unordered Map - unsorted data unordered_map<string, int> m;
int main() {
	unordered_map<string, int> m;

	m.emplace("tv", 70);
	m.emplace("phone", 10);
	m.emplace("fridge", 150);

	for (auto p: m) {
		cout << p.first << " " << p.second << endl;
	}
	return 0;

}
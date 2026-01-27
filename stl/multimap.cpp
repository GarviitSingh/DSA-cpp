#include <iostream>
#include <map>
using namespace std;
//Multimap- multimap<string, int>m;
// used to print same key value many times

int main() {
	multimap<string, int > m;
	m.emplace("tv", 100);
	m.emplace("tv", 100);
	m.emplace("tv", 100);
	m.emplace("tv", 100);
	m.emplace("tv", 100);

	m.erase("tv");  //this will empty the whole map 

	for (auto p : m) {
		cout << p.first << " " << p.second << endl;
	}
	return 0;
}
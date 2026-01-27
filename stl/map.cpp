#include <iostream>
#include <map>
using namespace std;
//Map (key,value) - map<string,int> m;
//map by default sorts the data in ascending order 
int main() {
	map<string, int > m;

	m["tv"] = 50;
	m["tv"] = 100; //writting same key two times will overwrite the value from teh prev one
	m["laptop"] = 100;
	m["headphones"] = 50;

	m.emplace( "camera", 69 ); //to insert the new key,value
	m.erase("tv"); //erases the key from map
	
	for (auto p : m) {
		cout << p.first << " " << p.second << endl;
	}

	//find used to find any key in the map
	if(m.find("camera") !=m.end()){ 
		cout<<"found\n";
	}
	else {
		cout << "not found\n";
	}

	//cout << "count- " << m["laptop"] << endl; //count tells the no. of key in the map 

	return 0;
}
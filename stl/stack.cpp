#include <iostream>
#include <stack>
using namespace std;
//Stack(LIFO) - stack<int> s;

int main() {
	stack<int> s;
	s.push(1); // used to push value in stack
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	s.pop();  // used to remove top value
		
	cout << " " << s.top() << endl; //top used to print the top value
	cout << s.size() << endl; //used to check the size of stack
	
	//swap - it swaps the value of two stacks 
	stack<int> s2;
	s2.swap(s); // from this the value of s will come in s2 and s will be empty
	cout << s2.size() << endl; // now size will be - 4 
	
	return 0;
}

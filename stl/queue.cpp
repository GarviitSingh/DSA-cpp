#include <iostream>
#include <queue>
using namespace std;
//Queue(FIFO) - queue<int> q;
  
int main() {
	queue<int> q;
	q.push(1); //inserting values in queue
	q.push(3);
	q.push(2);
	q.push(4);
	
	//q.pop(); //it will remove the front element

	cout << " " << q.front() << endl;  // 3  (after pop)
	cout << " " << q.size() << endl;  // 3
	cout << q.empty() << endl;  //output - 0

	queue<int> q2;
	q2.swap(q);

	cout << " " << q2.front() << endl;  
	cout << " " << q2.size() << endl;

	return 0;
}
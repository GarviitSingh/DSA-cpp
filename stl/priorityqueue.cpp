#include <iostream>
#include <queue>
using namespace std;
//Priority Queue - priority_queue<int> q;
//larger the value higher the priority
int main() {
	priority_queue<int>pq;
	pq.push(8); //inserting values in priority queue
	pq.push(5);
	pq.push(2);
	pq.push(10);

	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}

	//cout << pq.top() << endl; //10 cause its the largest value in pq queue
	//cout << pq.size() << endl; //size - 4
	cout << endl;

	return 0;
}

//to reverse the priority queue- priority_queue<int, vector<int>, greater<int>>pq
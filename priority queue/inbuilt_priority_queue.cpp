#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int> pq;
	// cout << "size " << pq.size() << endl;
	// cout << pq.empty() << endl;
	// cout << pq.top() << endl;
	// pq.pop();
	// cout << "size " << pq.size() << endl;
	// pq.pop();
	// cout << "size " << pq.size() << endl;
	pq.push(10);
	cout << pq.top() << endl;
	pq.push(20);
	cout << pq.top() << endl;
	pq.push(25);
	cout << pq.top() << endl;
	pq.push(50);
	cout << pq.top() << endl;
	pq.push(5);
	cout << pq.top() << endl;
	pq.push(100);
	cout << pq.top() << endl;
	// cout << "size " << pq.size() << endl;
	// cout << pq.empty() << endl;
	// cout << pq.top() << endl;
	// while(!pq.empty())
	// {
	// 	cout << pq.top() << endl;
	// 	pq.pop();
	// }
	return 0;	
}
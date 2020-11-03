#include <iostream>
#include <queue>
using namespace std;
int main()
{
	// queue <int> q;
	// q.push(10);
	// q.push(20);
	// q.push(30);
	// q.push(40);
	// q.push(50);
	// while(!q.empty())
	// {
	// 	cout << q.size() << endl; 
	// 	cout << q.front() << endl;
	// 	q.pop();
	// }
	// cout << q.size() << endl;


	queue <char> q;
	q.push('a');
	q.push('b');
	q.push('c');
	q.push('d');
	q.push('e');
	while(!q.empty())
	{
		cout << q.size() << endl; 
		cout << q.front() << endl;
		q.pop();
	}
	cout << q.size() << endl;
	return 0;
}

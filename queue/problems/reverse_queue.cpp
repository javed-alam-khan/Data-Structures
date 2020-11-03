#include <iostream>
#include <queue>
using namespace std;
void print(queue <int> q)
{
	while(!q.empty())
	{
		cout << q.front() << " " ;
		q.pop();
	}
	cout << endl;
}

void reverseQueue(queue<int> &q)
{
	if(q.size()==1 || q.size()==0)
		return;
	int tmp;
	tmp = q.front();
	q.pop();
	reverseQueue(q);
	q.push(tmp);
}

int main()
{
	queue <int> q;
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		int input;
		cin >> input;
		q.push(input);
	}
	print(q);
	reverseQueue(q);
	print(q);
	return 0;
}
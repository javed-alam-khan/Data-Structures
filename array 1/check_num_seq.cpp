#include <iostream>
using namespace std;
int main()
{
	int n;
	int prev;
	int curr;
	bool decreasing = true;
	cin >> n;
	cin >> prev;
	for(int i=0; i<n-1; i++)
	{
		cin >> curr;
		if(curr == prev)
		{
			cout << "false" << endl;
			exit(0);
		}
		else if(curr > prev)
		{
			decreasing = false;
			prev = curr;
		}
		else
		{
			if(decreasing == false)
			{
				cout << "false" << endl;
				exit(0);
			}
			prev = curr;
		}
	}
	cout << "true" << endl;
	return 0;
}
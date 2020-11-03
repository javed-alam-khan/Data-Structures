#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int store;
	for(int i=1; ;i++)
	{
		store = 3*i+2;
		if(store % 4 != 0)
		{
			cout<<store<<" ";
			x--;
			if(x == 0)
				break;
		}
	}
	cout<<endl;
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int lc = 1 ; lc <= n; lc++)
	{
		for(int stars = 1; stars <= n-lc+1; stars++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
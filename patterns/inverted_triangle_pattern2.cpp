#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 1 ; i <= n; i++)
	{
		int p = n - i + 1;
		for(int j = 1; j <= n - i + 1; j++)
		{
			cout<<p;
		}
		cout<<endl;
	}
	return 0;
}
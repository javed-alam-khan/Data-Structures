#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 1 ; i <= n; i++)
	{
		int r1 = i;
		for(int j = 1; j <= n-i ; j++)
		{
			cout<<" ";
		}
		for(int k = 1; k <= i; k++)
		{
			cout<<r1;
			r1++;
		}
		r1 = r1-2;
		for(int l = i-1; l >= 1; l--)
		{
			cout<<r1;
			r1--;
		}

		cout<<endl;
	}
	return 0;
}
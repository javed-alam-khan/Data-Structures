#include<iostream>
using namespace std;
int main()
{
	int n;
	int p1;
	int p2;
	cin >> n;
	p1 = (n+1)/2;
	p2 = p1-1;
	for(int i = 1 ; i <= p1; i++)
	{
		for(int j = 1; j <= p1-i; j++)
		{
			cout<<" ";
		}
		for(int k = 1; k <= 2*i-1; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	int lc = 1;
	for(int i = p2 ; i >= 1; i--)
	{
		for(int j = 1; j <= lc; j++)
		{
			cout<<" ";
		}
		for(int k = 1; k <= 2*i-1; k++)
		{
			cout<<"*";
		}
		cout<<endl;
		lc++;
	}
	return 0;
}
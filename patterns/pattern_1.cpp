#include<iostream>
using namespace std;
int main()
{
	int n;
	int p;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		p = i;
		for(int lv=1; lv<=(n-i); lv++)
		{
			cout<<" ";
		}
		for(int j=1; j<=i; j++)
		{
			cout<<p;
			p += 1;
		}
		cout<<endl;
	}
	return 0;
}
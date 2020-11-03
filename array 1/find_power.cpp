#include<iostream>
using namespace std;
int main()
{
	int x;
	int n;
	int res = 1;
	cin>>x;
	cin>>n;
	for(int i=0; i<n; i++)
		res = res*x;
	cout<<res<<endl;
	return 0;
}
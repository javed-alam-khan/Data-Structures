#include<iostream>
using namespace std;
int multiplyNumbers(int m, int n)
{
	int small_outpt;
	if(n==0)
		return 0;
	small_outpt = multiplyNumbers(m, n-1);
	return m + small_outpt;
}
int main()
{
	int m;
	int n;
	cin>>m;
	cin>>n;
	cout<<multiplyNumbers(m, n)<<endl;
	return 0;
}
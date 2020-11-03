#include<iostream>
using namespace std;
int fact(int n)
{
	int small_res;
	if(n==0 || n==1)
		return 1;
	small_res = fact(n-1);
	return n*small_res;
}
int main()
{
	int n;
	int f;
	cout<<"Enter the no"<<endl;
	cin>>n;
	f = fact(n);
	cout<<"factorial is "<<f<<endl;
	return 0;
}
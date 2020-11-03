#include<iostream>
using namespace std;
int fibo(int n)
{
	if(n==0 || n==1)
		return n;
	int small_res = fibo(n-1)+fibo(n-2);
	return small_res;
}
int main()
{
	int n;
	int res;
	cout<<"Enter the no"<<endl;
	cin>>n;
	res = fibo(n);
	cout<<res<<endl;
	return 0;
}
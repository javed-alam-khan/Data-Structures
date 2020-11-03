#include<iostream>
using namespace std;
int pow_cal(int x,int n)
{
	int small_res;
	if(n==0)
		return 1;
	small_res = pow_cal(x,n-1);
	return small_res*x;
}
int main()
{	
	int x;
	int n;
	int res;
	cout<<"Enter x and n"<<endl;
	cin>>x;
	cin>>n;
	res = pow_cal(x,n);
	cout<<res<<endl;
	return 0;
}
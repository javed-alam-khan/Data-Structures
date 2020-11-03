#include<iostream>
using namespace std;
int count_digits(int n)
{
	int small_res;
	if(n==0)
		return 0;
	small_res = count_digits(n/10);
	return (1+small_res);

}
int main()
{
	int n;
	int res;
	cout<<"Enter the no"<<endl;
	cin>>n;
	res = count_digits(n);
	cout<<res<<endl;
	return 0;
}
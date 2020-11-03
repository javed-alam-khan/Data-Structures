#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
	int small_ans;
	if(n==0)
		return 0;
	small_ans = sumOfDigits(n/10);
	return small_ans + n%10;	
}
int main()
{
	int n;
	cin>>n;
	cout<<sumOfDigits(n)<<endl;
	return 0;
}
#include<iostream>
using namespace std;
int countZeros(int n)
{
	int small_ans;
	if(n==0)
		return 0;
	small_ans = countZeros(n/10);
	if(n % 10 == 0)
		small_ans += 1;
	return small_ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<countZeros(n)<<endl;
	return 0;
}
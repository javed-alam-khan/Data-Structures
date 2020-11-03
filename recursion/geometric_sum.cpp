#include<iostream>
#include<math.h>
using namespace std;
// function for geometric sum
double geometricSum(int k) 
{
	double small_ans;
	double pow_cal;
	if(k==0)
		return 1;
	pow_cal = pow(2,-k);
	cout<<"pow_cal "<< pow_cal<<endl;
	small_ans = geometricSum(k-1);
	cout<<"small_ans "<<small_ans<<endl;
	return small_ans + pow_cal;


}
int main()
{
	int k;
	cin>> k;
	cout<< geometricSum(k)<< endl;
	return 0;
}
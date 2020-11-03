#include<iostream>
using namespace std;
int staircase(int n)
{
	int a;
	int b;
	int c;
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else if(n==3)
		return 4;
	a = staircase(n-1);
	b = staircase(n-2);
	c = staircase(n-3);
	return (a+b+c);
}
int main()
{
	int n;
	int r;
	cout<<"Enter n"<<endl;
	cin>>n;
	r = staircase(n);
	cout<<"r : "<<r<<endl;
}
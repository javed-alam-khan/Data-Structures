#include<iostream>
using namespace std;
void printSum(int n)
{
	int sum = 0;
	for(int i=1; i<=n; i++)
	{
		sum += i;
	}
	cout<<sum<<endl;
}
void printProd(int n)
{
	int prod = 1;
	for(int i=1; i<=n; i++)
	{
		prod *= i;
	}
	cout<<prod<<endl;
}
int main()
{
	int n;
	int c;
	cin >> n;
	cin >> c;
	if(c==1)
	{
		printSum(n);
	}
	else if(c==2)
	{
		printProd(n);
	}
	else
	{
		cout<<-1<<endl;
	}
	return 0;
}
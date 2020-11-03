#include<iostream>
#include<cmath>
using namespace std;

// function to check if a number is prime
bool isPrime(int n)
{
	for(int lc=2; lc<=sqrt(n); lc++)
	{
		if(n%lc == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	for(int i=2; i<=n; i++)
	{
		if(isPrime(i))
			cout<<i<<endl;
	}
	return 0;
}
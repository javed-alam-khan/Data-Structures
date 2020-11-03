#include <iostream>
using namespace std;

int fiboHelper(int n, int* res)
{
	if(n <= 1)
		return n;
	if(res[n] != -1)
		return res[n];
	int a = fiboHelper(n-1, res);
	int b = fiboHelper(n-2, res);
	res[n] = a + b;
	return res[n];
}

int fibo(int n)
{
	int* res = new int[n+1];
	for(int i = 0; i < n+1; i++)
		res[i] = -1;
	return fiboHelper(n, res);
}

int main()
{
	int n;
	cout << "Enter n" << endl;
	cin >> n;
	cout << fibo(n) << endl;
	return 0;
}
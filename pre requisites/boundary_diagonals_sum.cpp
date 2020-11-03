#include<bits/stdc++.h>
using namespace std;

int totalSum(int twoD[][1001], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += twoD[i][0] + twoD[i][n-1];
	for(int i = 1; i < n-1; i++)
	{
		sum += twoD[0][i] + twoD[n-1][i];
		sum += twoD[i][i];
		if(i != n-(i+1))
			sum += twoD[i][n-(i+1)];
	}
	return sum;
    
}

int main()
{
	int tCases;
	cin >> tCases;
	while(tCases--)
	{
		int n;
		cin >> n;
		int twoD[1001][1001];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >> twoD[i][j];
			}
		}
		cout << totalSum(twoD, n);
	}
	cout << endl;
	return 0;
}
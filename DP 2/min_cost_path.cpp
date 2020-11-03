#include <iostream>
#include <climits>
using namespace std;
void print(int** adjM, int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			cout << adjM[i][j] << " ";
		cout << endl;
	}
}



int minCostPath(int** adjM, int m, int n, int i, int j)
{
	if(m == 0 && n == 0)
		return 0;
	if(j+1 >= n  &&  i+1 >= m)
		return adjM[i][j];
	int a = INT_MAX;
	int b = INT_MAX;
	int c = INT_MAX;
	if(j+1 < n)
	{
		a = minCostPath(adjM, m, n, i, j+1);
	}
	if(i+1 < m)
	{
		b = minCostPath(adjM, m, n, i+1, j);
	}
	if(i+1 < m && j+1 < n)
	{
		c = minCostPath(adjM, m, n, i+1, j+1);
	}
	
	return adjM[i][j] + min(min(a, b), c);
}

int minCostPath(int** adjM, int m, int n)
{
	return minCostPath(adjM, m, n, 0, 0);
}

int main()
{
	int m;
	int n;
	cin >> m;
	cin >> n;
	int** adjM = new int* [m];
	for(int i = 0; i < m; i++)
	{
		adjM[i] = new int[n];
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			cin >> adjM[i][j];
	}
	// print(adjM, m, n);
	cout << minCostPath(adjM, m, n) << endl;
	return 0;
}

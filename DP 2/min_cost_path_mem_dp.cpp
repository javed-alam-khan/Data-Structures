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



int minCostPath(int** adjM, int m, int n, int i, int j, int** output)
{
	if(m == 0 && n == 0)
		return 0;
	if(output[i][j] != -1)
	{
		return output[i][j];
	}
	
	if(j+1 >= n  &&  i+1 >= m)
	{
		output[i][j] = adjM[i][j];
		return adjM[i][j];
	}
	int a = INT_MAX;
	int b = INT_MAX;
	int c = INT_MAX;
	if(j+1 < n)
	{
		a = minCostPath(adjM, m, n, i, j+1, output);
	}
	if(i+1 < m)
	{
		b = minCostPath(adjM, m, n, i+1, j, output);
	}
	if(i+1 < m && j+1 < n)
	{
		c = minCostPath(adjM, m, n, i+1, j+1, output);
	}

	output[i][j] = adjM[i][j] + min(min(a, b), c);
	return output[i][j];
	
}

int minCostPath(int** adjM, int m, int n, int** output)
{
	return minCostPath(adjM, m, n, 0, 0, output);
}

int minCostPathDp(int** adjM, int m, int n)
{
	if(m == 0 && n == 0)
		return 0;
	int** output = new int*[m];
	for(int i = 0; i < m; i++)
	{
		output[i] = new int[n];
	}
	output[m-1][n-1] = adjM[m-1][n-1];
	for(int i = n-2; i >= 0; i-- )
	{
		output[m-1][i] = output[m-1][i+1] + adjM[m-1][i];
	}
	for(int j = m-2; j >= 0; j-- )
		output[j][n-1] = output[j+1][n-1] + adjM[j][n-1];
	for(int i = m-2; i >= 0; i--)
	{
		for(int j = n-2; j >= 0; j--)
			output[i][j] = adjM[i][j] + min(min(output[i][j+1], output[i+1][j]), output[i+1][j+1]);

	}
	return output[0][0];
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
	int** output = new int*[m];
	for(int i = 0; i < m; i++)
	{
		output[i] = new int[n];
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			output[i][j] = -1;
	}
	cout << "Mem " << minCostPath(adjM, m, n, output) << endl;
	cout << "DP ";
	cout << minCostPathDp(adjM, m, n) << endl;
	return 0;
}

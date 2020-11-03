#include <iostream>
using namespace std;
void spiralPrint(int** twoDArr, int n, int m)
{
	// cout << "inside spiral print" << endl;
	int rowStart = 0;
	int rowEnd = n-1;
	int colStart = 0;
	int colEnd = m-1;
	int count = m*n;
	// cout << rowStart << endl;
	// cout << rowEnd << endl;
	// cout << colStart << endl;
	// cout << colEnd << endl;
	while(count)
	{
		for(int i = colStart; i <= colEnd; i++)
		{
			cout << twoDArr[rowStart][i] <<" ";
			count--;
			if(count == 0)
			{
				cout << endl;
				return;
			}
		}
		rowStart++;

		for(int j = rowStart; j <= rowEnd; j++)
		{
			cout << twoDArr[j][colEnd] << " ";
			count--;
			if(count == 0)
			{
				cout << endl;
				return;
			}
		}
		colEnd--;

		for(int k = colEnd; k >= colStart; k--)
		{
			cout <<  twoDArr[rowEnd][k] << " ";
			count--;
			if(count == 0)
			{
				cout << endl;
				return;
			}
		}
		rowEnd--;
		
		for(int l = rowEnd; l >= rowStart; l--)
		{
			cout << twoDArr[l][colStart] << " ";
			count--;
			if(count == 0)
			{
				cout << endl;
				return;
			}
		}
		colStart++;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int m;
		cin >> n;
		cin >> m;
		int** twoDArr = new int* [n];
		for(int i=0; i<n; i++)
			twoDArr[i] = new int[m];

		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
				cin >> twoDArr[i][j];
		}
		
		spiralPrint(twoDArr, n, m);
	}
	return 0;
}
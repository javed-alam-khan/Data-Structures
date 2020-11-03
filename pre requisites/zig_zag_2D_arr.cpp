#include <bits/stdc++.h>
using namespace std;

void zigZag(int twoD[][1001], int nRows, int mCols)
{
	// if(nRows == 0)
	// 	return;
	for(int i = 0; i < mCols; i++)
	{
		if(i%2 == 0)
		{
			for(int j = 0; j < nRows; j++)
				cout << twoD[j][i] << " ";
		}
		else
		{
			for(int j = nRows-1; j >= 0; j--)
				cout << twoD[j][i] << " ";
		}
	}
}

int main()
{
	int tCases;
	cin >> tCases;
	while(tCases--)
	{
		int nRows;
		int mCols;
		cin >> nRows;
		cin >> mCols;
		int twoD[1001][1001];

		for(int i = 0; i < nRows; i++)
		{
			for(int j = 0; j < mCols; j++)
			{
				cin >> twoD[i][j];
			}
		}
		zigZag(twoD, nRows, mCols);
	}
	cout << endl;
	return 0;
}
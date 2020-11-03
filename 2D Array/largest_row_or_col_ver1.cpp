#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int t;
	int n;
	int m;
	int twoDArr[1000][1000];
	int rowId = 0;
	int colId;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> m;
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
				cin >> twoDArr[i][j];

		int maxRowSum = INT_MIN;
		int maxColSum = INT_MIN;

		// cout << "rwo" << endl;
		for(int i=0; i<n; i++)
		{
			int sum = 0;
			for(int j=0; j<m; j++)
			{
				sum += twoDArr[i][j];
				// cout << "i " << i << " " << "sum " << sum << endl;
			}
			if(sum > maxRowSum)
			{
				maxRowSum = sum;
				rowId = i;
			}
			// cout << i << " ";
			// cout << sum << endl;
		}
			// cout << rowId << " ";
			// cout << maxRowSum << endl;

		// cout << "column" << endl;
		for(int i=0; i<m; i++)
		{
			int sum = 0;
			for(int j=0; j<n; j++)
				sum += twoDArr[j][i];
			if(sum > maxColSum)
			{
				maxColSum = sum;
				colId = i;
			}
			// cout << i << " ";
			// cout << sum << endl;
		}
			// cout << colId << " ";
			// cout << maxColSum << endl;

		// cout << endl << "result" << endl;
		if(maxRowSum > maxColSum)
			cout << "row " << rowId << " " << maxRowSum << endl;
		else if(maxRowSum == maxColSum)
			cout << "row " << rowId << " " << maxRowSum << endl;
		else
			cout << "column " << colId << " " << maxColSum << endl;
	}
	return 0;
}
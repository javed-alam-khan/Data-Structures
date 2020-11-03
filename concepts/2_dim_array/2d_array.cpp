#include <iostream>
using namespace std;
void printRowWise(int twoDArr[][5], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			// cout << i << j << " ";
			cout << twoDArr[i][j] << "\t";
		}
		cout << endl;
	}
}

void printColumnWise(int twoDArr[][5], int m, int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			// cout << j << i << " ";
			cout << twoDArr[j][i] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	// int twoDArr[100][100];
	// int m;
	// int n;
	// cin >> m;
	// cin >> n;
	// Taking input
	// for(int i=0; i<m; i++)
	// {
	// 	for(int j=0; j<n; j++)
	// 		cin >> twoDArr[i][j];
	// }

	int twoDArr[5][5] = {{1,2},{3,4},{5,6}};
	// Printing row-wise
	cout << "row-wise :" << endl;
	printRowWise(twoDArr, 5, 5);
	// Printing column-wise
	cout << "column-wise :" << endl;
	printColumnWise(twoDArr, 5, 5);
	return 0;
}
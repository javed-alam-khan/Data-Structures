#include <iostream>
using namespace std;
void wavePrint(int** twoDArr, int n, int m)
{
	for(int i=0; i<m; i++)
	{
		// cout << "i " << i << endl;
		if(i%2 == 0)
		{
			// cout << "inside even index" << endl;
			for(int j=0; j<n; j++)
				cout << twoDArr[j][i] << " ";
			// cout << endl;
		}
		else
		{
			// cout << "inside odd index" << endl;
			for(int j=n-1; j>=0; j--)
				cout << twoDArr[j][i] << " ";
			// cout << endl;
		}
	}
	cout << endl;
}

int main()
{
	int t;
	int n;
	int m;
	cin >> t;
	while(t--)
	{
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
		wavePrint(twoDArr, n, m);
	}
	return 0;
}
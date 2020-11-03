#include <iostream>
using namespace std;
int main()
{
	int t;
	int m;
	int n;
	cin >> t;
	while(t--)
	{

		cin >> m;
		cin >> n;

		int** twoDimArr = new int* [m];
		for(int i=0; i<m; i++)
			twoDimArr[i] = new int[n];

		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
				cin >> twoDimArr[i][j];
		}

		cout << "output" << endl;
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
				cout << twoDimArr[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}
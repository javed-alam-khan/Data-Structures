#include <iostream>
using namespace std;
int main()
{
	int m;
	int n;
	int twoDArr[1000][1000];
	cin >> m;
	cin >> n;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cin >> twoDArr[i][j];
	}

	for(int i=0; i<n; i++)
	{
		int sum = 0;
		for(int j=0; j<m; j++)
			sum += twoDArr[j][i];
		cout << sum <<" ";
	}
	cout << endl;
	return 0;
}
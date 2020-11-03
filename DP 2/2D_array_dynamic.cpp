#include <iostream>
using namespace std;
void print(int** twoD, int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			cout << twoD[i][j] << " ";
		cout << endl;
	}
}
int main()
{
	int m;
	int n;
	cin >> m;
	cin >> n;
	int** twoD = new int*[m];
	for(int i = 0; i < m; i++)
	{
		twoD[i] = new int[n];
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cin >> twoD[i][j];
	}
	print(twoD, m, n);
	return 0;
}
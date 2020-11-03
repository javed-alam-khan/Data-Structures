#include <iostream>
#include <climits>
using namespace std;
void intersection(int* array1, int* array2, int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(array1[i] == array2[j])
			{
				cout << array1[i] << " ";
				array2[j] = INT_MIN;
				break;
			}
		}
	}
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;

		int *array1 = new int[n];
		for(int lv=0; lv<n; lv++)
		{
			cin >> array1[lv];
		}

		int m;
		cin >> m;
		int *array2 = new int[m];
		for(int lv=0; lv<m; lv++)
		{
			cin >> array2[lv];
		}

		intersection(array1, array2, n, m);
	}
	return 0;
}
#include <iostream>
using namespace std;
int duplicateNumber(int* array, int n)
{
	for(int i=0; i<n-1; i++)
	{
		int c = 0;
		for(int j=i+1; j<n; j++)
		{
			if(array[i] == array[j])
				c++;
		}
		if(c == 1)
			return array[i];
	}

}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int *array = new int[n];
		for(int lv=0; lv<n; lv++)
		{
			cin >> array[lv];
		}
		cout << duplicateNumber(array, n) << endl;
	}
	return 0;
}
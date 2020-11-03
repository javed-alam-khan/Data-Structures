#include <iostream>
using namespace std;
int findUnique(int* array, int n)
{
	for(int i=0; i<n; i++)
	{
		// cout <<"i"<<" "<<i<<endl;
		int c = 0;
		for(int j=0; j<n; j++)
		{
			if(i == j)
			{
				continue;
			}
			if(array[i] == array[j])
			{
				c++;
			}
		}
		// cout <<"c"<<" "<<c<<endl;
		if(c == 0)
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
			cin >> array[lv];
		cout << findUnique(array, n) << endl;
	}
	return 0;
}
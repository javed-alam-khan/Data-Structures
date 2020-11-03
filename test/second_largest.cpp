#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	int l;
	int sl;
	for(int i=0; i<n; i++)
		cin >> arr[i];

	l = INT_MIN;
	sl = INT_MIN;
	for(int lv=0; lv<n; lv++)
	{
		if(arr[lv]>l)
		{
			sl = l;
			l = arr[lv];
		}
		else
		{
			if(arr[lv]>sl && arr[lv]!=l)
				sl = arr[lv];
		}
	}
	cout << sl << endl;
	return 0;
}
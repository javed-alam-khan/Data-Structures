#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int target;
	cin >> target;
	int* arr = new int[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	for(int i = 0; i < n ; i++)
	{
		int sum = 0;
		for(int j = i; j < n; j++)
		{
			// cout << "arr[j] " << arr[j] << endl;
			sum += arr[j];
			// cout << "sum " << sum << endl;
			if(sum == target)
			{
				cout << "true" << endl;

                for(int k = i; k <= j; k++)
                    cout << arr[k] << " ";
                cout << endl;

				exit(0);
			}
		}
	}
	cout << "false" << endl;
	return 0;
}
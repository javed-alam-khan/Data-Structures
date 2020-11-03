#include <iostream>
using namespace std;
void print(int* arr, int size)
{
	for(int i=0; i<size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while(i<size1 && j<size2)
	{
		if(arr1[i] < arr2[j])
			ans[k++] = arr1[i++];
		else
			ans[k++] = arr2[j++];
	}
	while(i<size1)
		ans[k++] = arr1[i++];
	while(j<size2)
		ans[k++] = arr2[j++];
	print(ans, size1+size2);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int m;
		cin >> n;
		int *arr1 = new int[n];
		for(int i=0; i<n; i++)
		{
			cin >> arr1[i];
		}

		cin >> m;
		int *arr2 = new int[m];
		for(int i=0; i<m; i++)
		{
			cin >> arr2[i];
		}
		int *ans = new int[m+n];
		merge(arr1, n, arr2, m, ans);
	}
	return 0;
}
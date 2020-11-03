#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[] = {10, 30, 60, 20, 70};
	sort(arr+1, arr + 3, greater<int>());
	for(int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
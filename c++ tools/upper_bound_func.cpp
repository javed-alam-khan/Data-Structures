#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[] = {10, 60, 50, 20, 30};
	sort(arr, arr + 5);
	cout << upper_bound(arr, arr + 5, 35) - arr << endl;
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[] = {10, 50, 20, 40, 40, 60};
	sort(arr, arr+5);
	cout << lower_bound(arr, arr+5, 35) - arr << endl;
	return 0;
}
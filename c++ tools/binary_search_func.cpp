#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[] = {10, 40, 20, 50 , 30};
	sort(arr, arr+5);
	cout << binary_search(arr, arr+5, 20) << endl;
	return 0;
}
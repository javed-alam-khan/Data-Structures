#include <iostream>
using namespace std;
void arrange(int* array, int n)
{
	int start = 0;
	int end = n-1;
	int val = 1;
	while(start < end)
	{
		array[start++] = val++;
		array[end--] = val++;
	}
	if(n%2 != 0)
		array[start] = val;

}
int main()
{
	int t;
	int n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int *array = new int[n];
		arrange(array, n);
		for(int i=0; i<n; i++)
			cout << array[i]<<" ";
		cout << endl;
		delete[] array;
	}
	return 0;
}
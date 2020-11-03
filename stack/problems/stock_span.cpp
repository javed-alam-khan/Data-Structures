#include <iostream>
#include <stack>
using namespace std;
int* stockSpan(int array[], int n)
{
	stack <int> stk;
	int* output = new int[n];
	// initializing output array
	for(int i=0; i<n; i++)
		output[i] = 1;

	stk.push(0);
	for(int i=1; i<n; i++)
	{
		int j;
		if(array[i] <= array[stk.top()])
		{
			// cout << "inside if\n";
			stk.push(i);
		}
		else
		{
			// cout << "inside else\n";
			while(!stk.empty() && array[i] >= array[stk.top()])
			{
				j = stk.top();
				stk.pop();
			}
			output[i] = i - j + output[j];
			stk.push(i);
		}
	}
	return output;
}
int main()
{
	int n;
	cin >> n;
	// taking input
	int* array = new int[n];
	for(int i=0; i<n; i++)
		cin >> array[i];

	int* output = stockSpan(array, n);
	// printing output array
	for(int i=0; i<n; i++)
		cout << output[i] << " ";
	cout << endl;
	return 0;
}
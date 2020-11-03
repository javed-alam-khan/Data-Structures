#include <iostream>
#include <climits>
using namespace std;
int minStepsToOne(int n)
{
	int* res = new int[n+1];
	res[0] = -1;
	res[1] = 0;

	for(int i=2; i<n+1; i++)
	{
		int a;
		int b = INT_MAX;
		int c = INT_MAX;
		a = res[i-1];
		if(i%2 == 0)
			b = res[i/2];
		if(i%3 == 0) 
			c = res[i/3];
		res[i] = 1 + min(min(a,b),c);
	}
	return res[n];
}

int main()
{
	int n;
	cout << "Enter n" << endl;
	cin >> n;
	cout << minStepsToOne(n) << endl;
	return 0;
}
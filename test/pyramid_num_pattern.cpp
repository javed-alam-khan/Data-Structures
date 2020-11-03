#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = 1;
	for(int i=1; i<=n; i++)
	{
		for(int j=n; j>=1; j--)
		{
			if(j>i)
				cout <<" ";
			else
				cout << j;
		}
		for(int k=1; k<i; k++)
		{
			cout << k+1;
		}
		cout << endl;
	}
	return 0;
}
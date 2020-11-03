#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int cSum1 = 0;
	int cSum2 = 0;
	int max1 = 0;
	int max2 = 0;
	for(int i = 0; i < n; i++)
	{
		int s1;
		int s2;
		cin >> s1;
		cin >> s2;
		cSum1 += s1;
		cSum2 += s2;
		if(cSum1-cSum2 > 0)
		{
			if(cSum1-cSum2 > max1)
				max1 = cSum1 - cSum2;
		}
		else
		{
			if(cSum2-cSum1 > max2)
				max2 = cSum2 - cSum1;
		}
	}
	if(max1 > max2)
		cout << "1 " << max1 << endl;
	else
		cout << "2 " << max2 << endl;
	return 0;
}
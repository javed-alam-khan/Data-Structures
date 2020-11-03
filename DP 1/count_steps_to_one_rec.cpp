#include <iostream>
#include <climits>
using namespace std;
int countStepsToOne(int n)
{
	if(n==1)
		return 0;
	int a;
	int b = INT_MAX;
	int c = INT_MAX;

	a = countStepsToOne(n-1);
	if(n%2 == 0)
		b = countStepsToOne(n/2);
	if(n%3 == 0)
		c = countStepsToOne(n/3);
	
	return 1 + min(min(a,b),c);
} 
int main()
{
	int n;
	cin >> n;
	cout << countStepsToOne(n) << endl;
	return 0;
}
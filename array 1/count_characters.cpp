#include<iostream>
using namespace std;
int main()
{
	char c;
	int lCase = 0;
	int wSpace = 0;
	int dig = 0;
	c = cin.get();
	while(c != '$')
	{
		if(c >= 97 && c<=122)
			lCase++;
		else if(c >= 48 && c<= 57)
			dig++;
		else if(c==9 || c==10 || c==32)
			wSpace++;
		c = cin.get();
	}
	cout << lCase << " ";
	cout << dig << " ";
	cout << wSpace << endl;
	return 0;
}
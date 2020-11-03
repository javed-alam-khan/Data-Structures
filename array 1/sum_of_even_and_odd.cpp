#include<iostream>
using namespace std;
int main()
{
	int even_sum = 0;
	int odd_sum = 0;
	int n;
	int r;
	cin>>n;
	while(n)
	{
		r = n%10;
		if(r%2 == 0)
			even_sum += r; 
		else
			odd_sum += r;
		n = n/10;	
	}
	cout<<even_sum<<" "<<odd_sum<<endl;
	return 0;
}
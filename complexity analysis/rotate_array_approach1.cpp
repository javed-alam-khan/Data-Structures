#include<iostream>
using namespace std;
void rotate(int *input, int d, int n)
{
	for(int i=0; i<d; i++)
	{
		int tmp;
		int j;
		tmp = input[0];
		for(j=1; j<n; j++)
		{
			input[j-1] = input[j];
		}
		input[j-1] = tmp;
	}
}
int main()
{
	int t;
	// int size;
	int d;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		int *input = new int[size];
		for(int lv=0; lv<size; lv++)
			cin>>input[lv];
		cin>>d;
		rotate(input, d, size);
		for(int lv=0; lv<size; lv++)
			cout<<input[lv]<<" ";
		cout<<"\n";
	}
	return 0;
}
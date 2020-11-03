#include<iostream>
using namespace std;
void rotate(int *input, int d, int n)
{
	int *tmp = new int[d];
	int k = 0;
	for(int i=0; i<d; i++)
		tmp[i] = input[i];
	int i;
	for(i=0; i<n-d; i++)
		input[i] = input[i+d];
	for(; i<n; i++)
		input[i] = tmp[k++];
}
int main()
{
	int t;
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
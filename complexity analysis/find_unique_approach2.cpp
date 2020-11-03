#include<iostream>
using namespace std;
int FindUnique(int arr[], int size)
{
	if(size == 0)
		return 0;
	int r = 0;
	for(int i=0; i<size; i++)
	{
		r ^= arr[i];
	}
	return r;
}
int main()
{
	int n;
	cin>>n;
	int *input = new int[n];
	for(int lv=0; lv<n; lv++)
		cin>>input[lv];
	cout<<FindUnique(input, n)<<endl;
	return 0;
}
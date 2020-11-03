#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pairSum(int input[], int size, int x)
{
	sort(input, input+size);
	for(int lv=0; lv<size; lv++)
		cout<<input[lv]<<" ";
	cout<<endl;
	for(int i=0; i<size-1; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(input[i]+input[j] == x)
			{
				cout<<input[i]<<" "<<input[j]<<endl;
				// if(input[i] <= input[j])
				// 	cout<<input[i]<<" "<<input[j]<<endl;
				// else
				// 	cout<<input[j]<<" "<<input[i]<<endl;
			}
		}
	}
}

int main()
{
	int n;
	int x;
	cin>>n;
	int *input = new int[n];
	for(int i=0; i<n; i++)
		cin>>input[i];
	cin>>x;
	pairSum(input, n, x);
	return 0;
}
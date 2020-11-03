#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void FindTriplet(int arr[], int size, int x)
{
	sort(arr , arr + size);
	for(int i=0; i<size-2; i++)
	{
		for(int j=i+1; j<size-1; j++)
		{
			for(int k=j+1; k<size; k++)
			{
				if(arr[i]+arr[j]+arr[k] == x)
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
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
	{
		cin>>input[i];
	}
	cin>>x;
	FindTriplet(input, n, x);
	return 0;
}
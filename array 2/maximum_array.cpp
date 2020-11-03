#include<iostream>
#include<climits>
using namespace std;
int cal_max(long int *array, int N)
{
	long int maximum = INT_MIN;
	for(int i=0; i<N; i++)
	{
		if(array[i] > maximum)
			maximum = array[i];
	}
	return maximum;
}
int main()
{
	int N;
	long int maximum;
	cin>>N;
	long int *array = new long int[N];
	for(int i=0; i<N; i++)
		cin>>array[i];
	maximum = cal_max(array,N);
	return 0;
}
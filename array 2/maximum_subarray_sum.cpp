#include<iostream>
using namespace std;
int main()
{
	int size;
	int max_sum = 0;
	int left = 0;
	int right = 0;
	cout<<"Enter size"<<endl;
	cin>>size;
	int *array = new int[size];
	cout<<"Enter elements"<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>array[i];
	}
	for(int i=0; i<size; i++)
	{
		for(int j=i; j<size; j++)
		{
			int csum = 0;
			for(int k=i; k<=j; k++)
			{
				// cout<<array[k]<<" ";
				csum += array[k];
			}
			// cout<<endl;
			// cout<<"csum = "<<csum<<endl;
			if(max_sum < csum)
			{
				max_sum = csum;
				left = i;
				right = j;
			}
		}
	}
	cout<<"maximum sum = "<<max_sum<<endl;
	cout<<"left index = "<<left<<endl;
	cout<<"right index = "<<right<<endl;
	for(int i=left; i<=right; i++)
		cout<<array[i]<<" ";
	cout<<endl;	
 return 0;
}

#include<iostream>
using namespace std;
	
int arrayRotateCheck(int *input, int size)
{
	for(int i=0; i<size-1; i++)
	{
		if(input[i]>input[i+1])
            return i+1;
	}
    return 0;
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
		cout<<arrayRotateCheck(input, size)<<endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void reverse(int *input, int n)
{
	int i = 0;
	int j = n-1;
	while(i<j)
	{
		swap(&input[i] , &input[j]);
		i++;
		j--;
	}
}
void rotate(int *input, int d, int n)
{
	reverse(input , n);
	reverse(input , n-d);
	reverse(input+n-d, d);	
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
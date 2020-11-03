#include<iostream>
using namespace std;
int main()
{
	int s;
	int e;
	int w;
	int cels;
	cin>>s;
	cin>>e;
	cin>>w;
	for(int lv = s; lv <= e; lv += w)
	{
		cels = (5.0/9)*(lv-32);
		cout<<lv<<"\t"<<cels<<endl;
	}
	return 0;
}
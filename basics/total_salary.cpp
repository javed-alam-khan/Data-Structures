#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int basic;
	char grade;
	cin>>basic;
	double hra;
	double da;
	double pf;
	int allow;
	hra = 0.2*basic;
	da = 0.5*basic;
	pf    = 0.11*basic;
	cin>>grade;
	if(grade == 'A')
		allow = 1700;
	else if(grade == 'B')
		allow = 1500;
	else
		allow = 1300;

	cout<<(int)(basic + hra + da + allow - pf + 0.5)<<endl;
	return 0;
}
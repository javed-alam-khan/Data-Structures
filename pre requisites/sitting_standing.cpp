#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("sitin.txt", "r", stdin);
	freopen("sitout.txt", "w", stdout);
	int r;
	cin >> r;
	int s;
	cin >> s;
	int tickets;
	cin >> tickets;
	int seats = r*s;
	if(tickets >= seats)
	{
		cout << seats << " " << (tickets-seats) << endl;
	}
	else
	{
		cout << tickets << " " << 0 << endl;	
	}
	return 0;
}
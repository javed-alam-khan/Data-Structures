#include<iostream>
using namespace std;

void printTable(int start, int end, int step)
{
	for(int lc = start; lc <= end; lc += step)
	{
		int cels;
		cels = (lc-32)*(5.0/9);
		cout << lc << "\t" << cels << endl; 
	}
}

int main()
{
	int start;
	int end;
	int step;
	cin >> start;
	cin >> end;
	cin >> step;
	printTable(start, end, step);
	return 0;
}
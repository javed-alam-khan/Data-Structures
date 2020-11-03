#include <iostream>
#include <algorithm>
using namespace std;
struct Interval
{
	int start;
	int end;
};

bool comp(Interval i1, Interval i2)
{
	if(i1.start < i2.start)
		return true;
	else
		return false;
}

int main()
{
	Interval arr[] = {{30, 55}, {10, 5}, {50, 25}, {60, 75}};
	sort(arr, arr + 4, comp);
	for(int i = 0; i < 4; i++)
	{
		cout << arr[i].start << " " << arr[i].end << endl;
	} 
	return 0;
}

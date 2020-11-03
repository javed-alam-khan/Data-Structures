#include <iostream>
#include <utility>
using namespace std;
int main()
{
	pair<int, int> p1(10, 20);
	pair<char, int> p2;
	p2 = make_pair('j', 100); 
	cout << p1.first << " " << p1.second << endl;
	cout << p2.second << " " << p2.first << endl;
	return 0;
}

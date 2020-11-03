#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<int> vect{10, 40, 20, 30};
	for(int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << endl;
	reverse(vect.begin()+1, vect.end()-1);
	for(int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << endl;
	return 0;
}
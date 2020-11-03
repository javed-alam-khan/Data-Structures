#include <vector>
#include <iostream>
using namespace std;

int main()
{
// 	vector<int> vect;
// 	cout << "size " << vect.size() << endl;
	// for(int i = 0; i < 5; i++)
	// {
	// 	int tmp;
	// 	cout << "Enter elem" << endl;
	// 	cin >> tmp;
	// 	vect.push_back(tmp);
	// }

	vector<int> vect(5);
	cout << "size " << vect.size() << endl;
	int size = vect.size();
	for(int i = 0; i < size; i++)
	{
		vect[i] = i*10;
	}

	cout << "first way of printing" << endl;
	for(int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << endl;

	cout << "second way of printing" << endl;
	vector<int>::iterator it;
	for(it = vect.begin(); it != vect.end(); it++)
		cout << *it << " ";
	cout << endl;
	return 0;
}
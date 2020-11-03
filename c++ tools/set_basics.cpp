#include <iostream>
#include <set>
using namespace std;
// int main()
// {
// 	set<int> s;
// 	int arr[] = {30, 20, 50, 10, 40, 50};
// 	for(int i = 0; i < 6; i++)
// 	{
// 		s.insert(arr[i]);
// 	}
// 	set<int> :: iterator itr;
// 	for(itr = s.begin(); itr != s.end(); itr++)
// 		cout << *itr << " ";
// 	cout << endl;
// 	if(s.find(45) != s.end())
// 		cout << "Found" << endl;
// 	else
// 		cout << "Not Found" << endl;
// 	return 0;
// }

int main()
{
	set<char> s;
	char arr[] = {'j', 'a', 'v', 'e', 'd'};
	for(int i = 0; i < 5; i++)
		s.insert(arr[i]);
	set<char> :: iterator itr;
	for(itr = s.begin(); itr != s.end(); itr++)
		cout << *itr << " ";
	cout << endl;
	if(s.find('k') != s.end())
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;
	return 0;
}
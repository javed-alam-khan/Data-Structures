#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
	unordered_map <string, int> uMap;
	uMap["Elon"] = 10;
	uMap["Gates"] = 20;
	uMap["Larry"] = 15;
	uMap["Jucker"] = 30;
	uMap["Bezos"] = 25;
	// Unordered Map Iterator
	unordered_map <string, int>:: iterator iter1;
	// for(iter1 = uMap.find("Elon"); iter1 != uMap.end(); iter1++)
	// {
	// 	cout << iter1->first << " " << iter1->second << endl;
	// }
	iter1 = uMap.begin();
	int k = 3;
	uMap.erase(iter1, uMap.end());
	for(iter1 = uMap.begin(); iter1 != uMap.end(); iter1++)
	{
		cout << iter1->first << " " << iter1->second << endl;
	}

	vector<int> vect;
	vect.push_back(100);	
	vect.push_back(300);
	vect.push_back(200);
	vect.push_back(250);
	// Vector iterator
	vector<int>:: iterator iter2;
	iter2 = vect.begin();
	vect.erase(iter2);
	
	for(iter2 = vect.begin(); iter2 != vect.end(); iter2++)
	{
		cout << *iter2 << " " ;
	}
	cout << endl;
	return 0;
}
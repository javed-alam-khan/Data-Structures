#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
	unordered_map <string, int> uMap;
	pair <string, int> p("Elon", 10);	
	uMap.insert(p);
	uMap["Larry"] = 20;
	// cout << uMap.size() << endl;
	
	// Check Presence

	// cout << uMap.count("Elon") << endl;	
	uMap.erase("Larry");
	// cout << uMap.size() << endl;
	// cout << uMap.at("Elon") << endl;
	// cout << uMap["Elon"] << endl;
	// cout << uMap.size() << endl;
	cout << uMap["Larry"] << endl;
	cout << uMap.size() << endl;

	if(uMap.count("Larry") > 0)
	{
		uMap["Larry"] = 20;
	}

	cout << uMap["Larry"] << endl;
	cout << uMap.size() << endl;

	return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1 = "jamia";
	string s2(s1);
	cout << s1 << endl;
	// cout << s1.length() << endl;
	cout << s2 << endl;
	string s3(s1, 2, 2);
	cout << s3 << endl;
	// string s4 = s1.substr(2, 1);
	// cout << s4 << endl;
	if(s1.compare(s2) == 0)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;

	if(s2.compare(s3) == 0)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
	return 0;
}
#include <iostream>
using namespace std;
int main() 
{
	int a;
	int b;
	int rls;
	int rrs;
	// int ror;
	// int rand;
	// int rnot;
	// int rxor;
	cin >> a;
	cin >> b;
	// ror = a|b;
	// rand = a&b;
	// rnot = ~a;
	// rxor = a^b;
	// cout << "result of or " << ror << endl;
	// cout << "result of and " << rand << endl;
	// cout << "result of not " << rnot << endl;
	// cout << "result of xor " << rxor << endl;
	rls = a << b;
	rrs = a >> b;
	cout << "result of left shift " << rls << endl;
	cout << "result of right shift " << rrs << endl;
	return 0;
}
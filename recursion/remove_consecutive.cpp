#include<iostream>
using namespace std;
void removeConsecutiveDuplicates(char *s)
{
	if(*s == '\0')
		return;
	if(*s != *(s+1))
	{
		removeConsecutiveDuplicates(s+1);
	}
	else
	{
		int i;
		for(i=1; s[i] != '\0'; i++)
			s[i-1] = s[i];
		s[i-1] = s[i];
		removeConsecutiveDuplicates(s);
	}

}
int main()
{
	char s[100000];
	cin>>s;
	removeConsecutiveDuplicates(s);
	cout<<s<<"\n";
	return 0;
}
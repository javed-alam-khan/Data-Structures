#include<iostream>
using namespace std;
void removeX(char *input)
{
	if(*input == '\0')
		return;
	if(*input != 'x')
		removeX(input + 1);
	else
	{
		int i;
		for(i=1; input[i] !='\0'; i++)
		{
			input[i-1] = input[i];
		}
		input[i-1] = input[i];
		removeX(input);
	}
}
int main()
{
	char input[100];
	cout<<"Enter string"<<endl;
	cin>>input;
	// cin.getline(input,100);
	removeX(input);
	cout<<input<<"\n";
	return 0;
}
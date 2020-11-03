#include <iostream>
using namespace std;
void removeX(char *input)
{
	if(*input == '\0')
		return;
	removeX(input+1);
	if(input[0]=='x')
	{
		int size = 0;
		char *ch = input;
		while(*ch != '\0')
		{
			ch++;
			size++;
		}
		cout<<"size "<<size<<endl;
		for(int i=0; i<size; i++)
		{
			input[i] = input[i+1];
		}
	}
}
int main() 
{
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

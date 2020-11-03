#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
void replacePi(char *input)
{
	if(*input == '\0')
		return;
	replacePi(input+1);
	if(input[0] == 'p')
	{
		if(input[1] == 'i')
		{
			int size = 0;
			char *ch = input;
			while(*ch != '\0')
			{
				ch++;
				size++;
			}
			int lc = size - 2;
			input[size + 2] = '\0';
			while(lc)
			{
				input[lc +1 + 2] = input[lc + 1];
				lc--;
			}
			input[0] = '3';
			input[1] = '.';
			input[2] = '1';
			input[3] = '4';
		}
	}
}
int main() 
{
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout<< input<< endl;
    return 0;
}

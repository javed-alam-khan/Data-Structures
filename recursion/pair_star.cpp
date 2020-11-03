#include <iostream>
using namespace std;
void pairStar(char *input)
{
	if(*input == '\0')
		return ;
	pairStar(input + 1);
	if(input[0]==input[1])
	{
		char *ch = input;
		int size = 0;
		while(*ch != '\0')
		{
			ch++;
			size++;
		}
		int lc = size - 1;
		input[size+1] = '\0';
		while(lc)
		{
			input[lc+1] = input[lc];
			lc--;
		}
		input[lc+1] = '*';	
	}
}

int main() 
{
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
   return 0;
}

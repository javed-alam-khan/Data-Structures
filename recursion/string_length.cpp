#include<iostream>
using namespace std;

int lengthCalc(char *input)
{
	int small_result;
	if(*input == '\0')
		return 0;
	small_result = lengthCalc(input + 1);
	return small_result + 1;
}

int main()
{   
	char input[100];
	int result;
	cout<<"Enter string\t";
	// cin >> input;
	cin.getline(input,100);		//hit enter for empty string
	result = lengthCalc(input);
	cout<<result<<"\n";
	return 0;
} 

// int main(int argc, char* argv[])	//./a.out "" for empty string
// {   
// 	int result;
// 	result = lengthCalc(argv[1]);
// 	cout<<result<<"\n";
// 	return 0;
// } 
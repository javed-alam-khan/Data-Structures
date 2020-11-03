#include <bits/stdc++.h>
#define lint long long int
using namespace std;

int main() 
{
	// your code goes here
	lint t, N, caseno, countA, countB;
	string shrads;
	char ch;
	cin>>t;
	caseno = t;
	while(t--)
	{
	    cin>>N;
	    countA = 0;
	    countB = 0;
	    cin>>shrads;
	    for(int i=0;i<N;i++)
	    {
	        if(shrads[i] == 'A')
	            countA++;
	        else
	            countB++;
	    }
	    cout<<"Case #"<<caseno - t<<": ";
	    if(abs(countA - countB) == 1)
	        cout<<'Y'<<endl;
	    else
	        cout<<'N'<<endl;
	}
	return 0;
}
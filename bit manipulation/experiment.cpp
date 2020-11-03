#include <iostream>
using namespace std;

// int main()
// {
//     int y = 1;
//     cout << (y & (y = 2)) << endl;
//     if(y & (y = 2)) 
//     {
//         cout << "true";
//     }
//     else 
//     {
//         cout << "false";
//     }
//     cout << endl;
// }

int main()
{
    int n;
    cin >> n;
    cout << (n << 2) << endl;
    cout << (n >> 2) << endl;
    return 0;
}
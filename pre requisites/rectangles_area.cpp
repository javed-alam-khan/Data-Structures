#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("bendin.txt", "r", stdin);
	freopen("bendout.txt", "w", stdout);
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int x4;
	int y4;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	cin >> x3;
	cin >> y3;
	cin >> x4;
	cin >> y4;
	int l1 = x2-x1; 
	int b1 = y2-y1;
	int l2 =  x4-x3;
	int b2 =  y4-y3;
	int leftX = max(x1, x3);
	int rightX = min(x2, x4);
	int leftY = min(y2, y4);
	int rightY = max(y1, y3);
	int intersectArea;
	if((leftX > rightX) || (leftY < rightY))
	{
		intersectArea = 0;
	}
	else
	{
		intersectArea = (rightX-leftX)*(leftY-rightY);
	}
	int resultantArea = l1*b1 + l2*b2 - intersectArea;
	cout << resultantArea << endl;
	return 0;
}
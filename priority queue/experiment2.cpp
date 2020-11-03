#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	vector<vector<int>*> vect;
	while(tc--)
	{
		int n;
		cin >> n;
		vector<int>* curr = new vector<int>;
		for(int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			curr->push_back(tmp);
		}

		vect.push_back(curr);
	}

	for(int i = 0; i < vect.size(); i++)
		{
			vector<int>* tmp;
			tmp = vect[i];
			for(int i = 0; i < tmp->size(); i++)
			{
				cout << (*tmp)[i] << " ";
			}
			cout << "\t";
		}
	cout << endl;

	return 0;
}

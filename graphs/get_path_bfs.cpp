#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
vector<int> getPath(int** adjM, int v, int v1, int v2, bool* visited)
{
	vector<int> res;
	if(v1 == v2)
	{
		res.push_back(v1);
		return res;
	}
	visited[v1] = true;
	queue<int> q;
	q.push(v1);
	unordered_map<int, int> ump;
	int flag = 1;
	while(flag == 1  && !(q.empty()))
	{
		cout << "check" << endl;
		int curr = q.front();
		cout << "curr " << curr << endl;
		q.pop();
		for(int i = 0; i < v; i++)
		{
			if(visited[i] == false)
			{
				if(adjM[curr][i] == 1)
				{
					q.push(i);
					visited[i] = true;
					ump[i] = curr;
					unordered_map<int, int> :: iterator itr;
					
					if(i == v2)
					{
						flag = 0;
						break;
					}
				}
			}
		}
	}
	// cout << "unordered map " << endl;
	unordered_map<int, int> :: iterator itr;
	// for(itr = ump.begin(); itr != ump.end(); itr++)
	// {
	// 	cout << itr->first << " " << itr->second << endl;
	// }
	// cout << endl;

	int f = 0;
	for(itr = ump.begin(); itr != ump.end(); itr++)
	{
		if(itr->second == v1)
		{
			f = 1;
			break;
		}
	}
	if(f == 0)
	{
		return res;
	}
	if(ump.find(v2) == ump.end())
		return res;
	int tmp = v2;
	res.push_back(tmp);
	while(tmp != v1)
	{
		// cout << "c" << endl;
		tmp = ump[tmp];
		res.push_back(tmp);
	}
	return res;

}
int main()
{
	int v;
	int e;
	cin >> v;
	cin >> e;
	int** adjM = new int* [v];
	for(int i = 0; i < v; i++)
	{
		adjM[i] = new int[v];
	}
	for(int i = 0; i < v; i++)
	{
		for(int j = 0; j < v; j++)
		{
			adjM[i][j] = 0;
		}
	}
	for(int i = 0; i < e; i++)
	{
		int a;
		int b;
		cin >> a;
		cin >> b;
		adjM[a][b] = 1;
		adjM[b][a] = 1;
	}
	int v1;
	int v2;
	cin >> v1;
	cin >> v2;
	bool* visited = new bool[v];
	for(int i = 0; i < v; i++)
		visited[i] = false;
	vector<int> res = getPath(adjM, v, v1, v2, visited);
	for(int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
	cout << endl;
	return 0;
}
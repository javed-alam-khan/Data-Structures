#include <iostream>
#include <vector>
using namespace std;
vector<int> getPath(int** adjM, int v, int v1, int v2, bool* visited)
{
	visited[v1] = true;
	vector<int> res;
	if(v1 == v2)
	{
		res.push_back(v1);
		return res;
	}
	for(int i = 0; i < v; i++)
	{
		if(visited[i] == false)
		{
			if(adjM[v1][i] == 1)
			{
				res = getPath(adjM, v, i, v2, visited);
				if(res.size() != 0)
				{
					res.push_back(v1);
					return res;
				}
			}
		}
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
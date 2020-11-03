#include <iostream>
using namespace std;
bool hasPath(int** adjM, int v, int v1, int v2, bool* visited)
{
	visited[v1] = true;
	if(adjM[v1][v2] == 1)
		return true;
	bool res = false;
	for(int i = 0; i < v; i++)
	{
		if(visited[i] == false)
		{
			if(adjM[v1][i] == 1)
			{
				res += hasPath(adjM, v, i, v2, visited);
				if(res == true)
					break;
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
	cout << hasPath(adjM, v, v1, v2, visited) << endl;
	return 0;
}
#include <iostream>
#include <queue>
using namespace std;
void bfs(int** adjM, int v, int sv)
{
	bool* visited = new bool[v];
	for(int i = 0; i < v; i++)
	{
		visited[i] = false;
	}
	queue<int> q;
	q.push(sv);
	visited[sv] = true;
	while(!q.empty())
	{
		int curr = q.front();
		q.pop();
		cout << curr << endl;
		for(int i = 0; i < v; i++)
		{
			if(visited[i] == false)
			{
				if(adjM[curr][i] == 1)
				{
					q.push(i);
					visited[i] = true;
				}
			}
		}
	}
	delete [] visited;
}
int main()
{
	int v;
	int e;
	cin >> v;
	cin >> e;
	int** adjM = new int*[v];
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
	for (int i = 0; i < e; i++)
	{
		int a;
		int b;
		cin >> a;
		cin >> b;
		adjM[a][b] = 1;
		adjM[b][a] = 1;
	}
	bfs(adjM, v, 0);
	for (int i = 0; i < v; i++)
	{
		delete [] adjM[i];
	}
	delete [] adjM;
	return 0;
} 
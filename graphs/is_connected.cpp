#include <iostream>
using namespace std;

void dfs(int** adjM, int verts, int sv, bool visited[])
{
	// cout << sv << " ";
	visited[sv] = true;
	for(int i = 0; i < verts; i++)
	{
		if(visited[i] == false)
		{
			if(adjM[sv][i] == 1)
				dfs(adjM, verts, i, visited);
		}
	}
}

bool isConnected(int** adjM, int verts)
{
	bool* visited = new bool[verts];
	for(int i = 0; i < verts; i++)
		visited[i] = false;

	dfs(adjM, verts, 0, visited);
	for(int i = 0; i < verts; i++)
	{
		if(visited[i] == false)
			return false;
	}
	return true;
	delete [] visited;
}

int main()
{
	int verts;
	int edges;
	cin >> verts;
	cin >> edges;
	int **adjM = new int*[verts];
	for(int i = 0; i < verts; i++)
		adjM[i] = new int[verts];

	for(int i = 0; i < verts; i++)
	{
		for(int j = 0; j < verts; j++)
			adjM[i][j] = 0;
	}

	for(int i = 0; i < edges; i++)
	{
		int v1;
		int v2;
		cin >> v1;
		cin >> v2;
		adjM[v1][v2] = 1;
		adjM[v2][v1] = 1;
	}
	// printMatrix(adjM, verts);
	if(isConnected(adjM, verts))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	for(int i = 0; i < verts; i++)
	{
		delete [] adjM[i]; 
	}
	delete [] adjM;
}
#include <iostream>
using namespace std;
void printMatrix(int** adjM, int verts)
{
	for(int i = 0; i < verts; i++)
	{
		for(int j = 0; j < verts; j++)
			cout << adjM[i][j] << " ";
		cout << endl;
	}
}

void dfs(int** adjM, int verts, int sv, bool visited[])
{
	cout << sv << " ";
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
	bool* visited = new bool[verts];
	for(int i = 0; i < verts; i++)
	{
		visited[i] = false;
	}
	dfs(adjM, verts, 0, visited);
	cout << endl;
	delete [] visited;
	for(int i = 0; i < verts; i++)
	{
		delete [] adjM[i]; 
	}
	delete [] adjM;
}
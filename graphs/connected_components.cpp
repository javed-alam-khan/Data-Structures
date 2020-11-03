#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void dfs(int** adjM, int verts, int sv, bool visited[], vector<int> &vect)
{
	vect.push_back(sv);
	visited[sv] = true;
	for(int i = 0; i < verts; i++)
	{
		if(visited[i] == false)
		{
			if(adjM[sv][i] == 1)
				dfs(adjM, verts, i, visited, vect);
		}
	}
}

vector<vector<int>> connComps(int** adjM, int verts)
{
	vector< vector<int> > res;
	bool* visited = new bool[verts];
	for(int i = 0; i < verts; i++)
		visited[i] = false;

	for(int i = 0; i < verts; i++)
	{
		vector<int> vect;
		if(visited[i] == false)
		{
			dfs(adjM, verts, i, visited, vect);
			res.push_back(vect);
		}
	}
	delete [] visited;
	return res;
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
	vector< vector<int> > res = connComps(adjM, verts);
	// cout << res.size() << endl;
	for(int i = 0; i < res.size(); i++)
	{
		vector<int> vect;
		vect = res[i];
		sort(vect.begin(), vect.end());
		for(int j = 0; j < vect.size(); j++)
			cout << vect[j] << " ";
		cout << endl;
	}
	for(int i = 0; i < verts; i++)
	{
		delete [] adjM[i]; 
	}
	delete [] adjM;
}
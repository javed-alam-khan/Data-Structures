#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class heapNode
{
	public:
	int value;
	int arrInd;
	int elemInd;
};

class Comp
{
	public:
	bool operator()(heapNode a, heapNode b)
	{
		if(a.value > b.value)
			return true;
		else
			return false;
	}
};

vector<int> mergeKSortedArrays(vector< vector<int>* >vect)
{
	heapNode hN;
	priority_queue< heapNode, vector<heapNode>, Comp > minPQ;
	for(int i = 0; i < vect.size(); i++)
	{
		hN.value = vect[i]->at(0);
		hN.arrInd = i;
		hN.elemInd = 0;
		minPQ.push(hN);
	}
	vector<int> result;
	while(minPQ.size() > 0)
	{
		heapNode tmp;
		tmp = minPQ.top();
		minPQ.pop();
		(tmp.elemInd)++;
		result.push_back(tmp.value);
		if(tmp.elemInd < vect[tmp.arrInd]->size())
		{
			hN.value = vect[tmp.arrInd]->at(tmp.elemInd);
			hN.arrInd = tmp.arrInd;
			hN.elemInd = tmp.elemInd;
			minPQ.push(hN);
		}
	}
	return result;
}

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

	// for(int i = 0; i < vect.size(); i++)
	// 	{
	// 		vector<int>* tmp;
	// 		tmp = vect[i];
	// 		for(int i = 0; i < tmp->size(); i++)
	// 		{
	// 			cout << (*tmp)[i] << " ";
	// 		}
	// 		cout << "\t";
	// 	}
	// cout << endl;

	vector<int> output = mergeKSortedArrays(vect);
	for(int i = 0; i < output.size(); i++)
		cout << output[i] << " ";
	cout << endl;
	return 0;
}
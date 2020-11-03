#include<iostream>
#include<queue>
#include<climits>
#include<algorithm>
using namespace std;

template <typename T>
class Node
{
	public:
	T data;
	Node<T>* left;
	Node<T>* right;
	Node(T data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}
	~Node()
	{
		left;
		right;
	}
};

Node<int>* inputLevelWise()
{
	int rootData;
	cin >> rootData;
	if(rootData == -1)
		return NULL;
	Node<int>* root = new Node<int>(rootData);
	queue< Node<int>* > q;
	q.push(root);
	while(q.empty() != true)
	{
		int childData;
		Node<int>* front = q.front();
		q.pop();
		Node<int>* child;
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->left = child;
		}

		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->right = child;
		}
	}
	return root;
}

void printLevels(Node<int>* root)
{
	if(root == NULL)
		return;
	queue<Node<int>*> q;
	q.push(root);
	q.push(NULL);
	while(q.size() != 0)
	{
		Node<int>* curr = q.front();
		q.pop();
		if(curr != NULL)
			cout << curr->data << " ";
		else
		{
			if(q.size() != 0)
			{
				q.push(NULL);
				cout << endl;
				continue;
			}
			else
			{
				cout << endl;
				break;
			}
		}
		if(curr->left != NULL)
			q.push(curr->left);
		if(curr->right != NULL)
			q.push(curr->right);
	}
}

int getSize(Node<int>* root)
{
	if(root == NULL)
		return 0;
	int c = 0;
	int l = getSize(root->left);
	int r = getSize(root->right);
	c = 1 + l + r;
	return c;
}

void buildArray(Node<int>* root, int* &arr, int &i)
{
	if(root == NULL)
		return;
	arr[i] = root->data;
	i++;
	buildArray(root->left, arr, i);
	buildArray(root->right, arr, i);
}

void nodesSumToS(Node<int>* root, int sum)
{
	int size = getSize(root);
	int *arr = new int(size);
	int i = 0;
	buildArray(root, arr, i);
	// for (int lv = 0; lv < size; lv++)
	// {
	// 	cout << arr[lv] << " ";
	// }
	// cout << endl;
	sort(arr, arr + size);
	// for (int lv = 0; lv < size; lv++)
	// {
	// 	cout << arr[lv] << " ";
	// }
	// cout << endl;
	int l = 0;
	int r = size - 1;
	while(l < r)
	{
		int s = arr[l] + arr[r];
		if(s == sum)
		{
			cout << arr[l] << " " << arr[r] << endl;
			l++;
			r--;
		}
		else if(s < sum)
		{
			l++;
		}
		else
		{
			r--;
		}
	}

}

int main()
{
	Node<int>* root = inputLevelWise();
	int sum;
	cin >> sum;
	nodesSumToS(root, sum);
	return 0;
}
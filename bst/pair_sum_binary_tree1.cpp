#include<iostream>
#include<queue>
#include<climits>
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


bool find(Node<int>* root, int data)
{
	if(root == NULL)
		return false;
	if(root->data == data)
	{
		root->data = INT_MIN;
		return true;
	}
	bool b1 = find(root->left, data);
	if(b1 == true)
		return b1;
	bool b2 = find(root->right, data);
		return b2;
}

void helper(Node<int> *root, Node<int> *curr, int sum)
{
	if(curr == NULL)
		return;
	if(curr->data != INT_MIN)
	{
		int tmp = curr->data;
		int data = sum - tmp;
	
		if(find(root, data))
		{
			cout << min(tmp, data) << " " << max(tmp, data) << endl;
		}
	}
	helper(root, curr->left, sum);
	helper(root, curr->right, sum);
}

void nodesSumToS(Node<int> *root, int sum) 
{
	helper(root, root, sum);
}


int main()
{
	Node<int>* root = inputLevelWise();
	// printLevels(root);
	int sum;
	cin >> sum;
	nodesSumToS(root, sum);
	return 0;
}
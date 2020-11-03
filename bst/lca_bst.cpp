#include<iostream>
#include<queue>
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

int lcaInBST(Node<int>* root, int a, int b)
{
	if(root == NULL)
		return -1;
	if( (root->data == a) || (root->data == b) )
	{
		return root->data;
	}
	int l = -1;
	int r = -1;
	if( (a < root->data) || (b < root->data) )
		l = lcaInBST(root->left, a, b);
	if( (a > root->data) || (b > root->data) )
		r = lcaInBST(root->right, a, b);
	if( (l == -1) && (r == -1) )
	{
		return -1;
	}
	else if( (l == -1) && (r != -1) )
		return r;
	else if( (l != -1) && (r == -1) )
		return l;
	else if( (l != -1) && (r != -1) )
		return root->data;
}

int main()
{
	Node<int>* root = inputLevelWise();
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << lcaInBST(root, a, b) << endl;
	return 0;
}
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
void insertDuplicateNode(Node<int>* root)
{
	if(root == NULL)
		return;
	Node<int>* rootDup = new Node<int>(root->data);
	Node<int>* tmp = root->left;
	root->left = rootDup;
	rootDup->left = tmp;
	insertDuplicateNode(root->right);
	insertDuplicateNode(rootDup->left);
}

int main()
{
	Node<int>* root = inputLevelWise();
	insertDuplicateNode(root);
	printLevels(root);
	return 0;
}

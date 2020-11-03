# include <iostream>
# include "binary_tree_node.h"
# include <queue>
using namespace std;

Node<int>* inputLevelWise()
{
	// Root input
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if(rootData == -1)
		return NULL;
	Node<int>* root = new Node<int>(rootData);

	// A queue for storing node addresses
	queue< Node<int>* > q;
	q.push(root);
	while(q.empty() != true)
	{
		int childData;
		Node<int>* front = q.front();
		q.pop();
		Node<int>* child;

		// Left child input
		cout << "Enter left child data of Node " << front->data  << endl;
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->left = child;
		}
		
		// Right child input
		cout << "Enter right child data of Node " << front->data  << endl;
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->right = child;
		}
	}
	// Returning root of built binary tree
	return root;
}

void printLevels(Node<int>* root)
{
	if(root == NULL)
	{
		cout << "empty bst" << endl;
		return;
	}
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





class BST
{
	public:
	Node<int>* root;
	BST()
	{
		root = NULL;
	}

	~BST()
	{
		delete root;
	}
	private:
	void printLevelWise(Node<int>* root)
	{
		queue<Node<int>*> q;
		q.push(root);
		while(q.size() != 0)
		{
			Node<int>* front = q.front();
			q.pop();
			cout << front->data <<":";
			// Left child print
			if(front->left != NULL)
			{
				cout << "L:" << front->left->data << ",";
				q.push(front->left);
			}
			else
				cout << "L:-1,";
			// Right child print
			if(front->right != NULL)
			{
				cout << "R:" << front->right->data;
				q.push(front->right);
			}
			else
				cout << "R:-1";
			cout << endl;
		}
	}

	public:
		void printTree()
		{
			printLevelWise(root);
		}

	private:
	bool hasDataHelper(Node<int>* root, int x)
	{
		if(root == NULL)
			return false;
		if(root->data == x)
			return true;
		if(x < root->data)
		{
			bool l = hasDataHelper(root->left, x);
			return l;
		}
		else
		{
			bool r = hasDataHelper(root->right, x);
			return r;
		}
	}

	public:
	bool hasData(int x)
	{
		return hasDataHelper(root, x);
	}


	private :
	Node<int>* insertHelper(Node<int>* node, int x)
	{
		if(node == NULL)
		{
			Node<int>* tmp = new Node<int>(x);
			return tmp;
		}
		else
		{
			if(x < node->data)
			{
				Node<int>* l = insertHelper(node->left, x);
				node->left = l;
			}
			else
			{
				Node<int>* r = insertHelper(node->right, x);
				node->right = r;
			}
		}
		return node;
	}

	public:
	void insert(int x)	
	{
		root = insertHelper(root, x);
	}

	Node<int>* bstMin(Node<int>* root)
	{
		if(root->left != NULL)
		{
			return bstMin(root->left);
		}
		else
		{
			return root;
		}
	}

	private:
	Node<int>* deleteHelper(Node<int>* node, int x)
	{
		if(node == NULL)
			return NULL;
		if(x == node->data)
		{
			if(node->left == NULL)
			{
				if(node->right == NULL)
				{
					cout<< "1st case" << endl;
					delete node;
					return NULL;
				}
				else
				{
					cout<< "2nd case" << endl;
					Node<int>* tmp = node->right;
					node->right = NULL;
					delete node;
					return tmp;
				}
			}
			else
			{
				if(node->right == NULL)
				{
					cout<< "3rd case" << endl;
					Node<int>* tmp = node->left;
					node->left = NULL;
					delete node;
					return tmp;
				}
				else
				{
					cout<< "4th case" << endl;
					Node<int>* r = bstMin(node->right);
					node->data = r->data;
					node->right = deleteHelper(node->right, r->data);
					return node;
				}
			}
		}
		else if(x < node->data)
		{
			Node<int>* l = deleteHelper(node->left, x);
			node->left = l;
			return node;
		}
		else
		{
			Node<int>* r = deleteHelper(node->right, x);
			node->right = r;
			return node;
		}
	}
	public:
	void deleteData(int x)
	{
		root = deleteHelper(root, x);
	}
};


int main()
{
	BST *bst = new BST();
	bst->insert(40);
	bst->insert(30);
	bst->insert(70);
	bst->insert(65);
	bst->insert(68);
	printLevels(bst->root);
	// bst->printTree();
	cout << endl;
	bst->deleteData(40);
	printLevels(bst->root);
	// bst->printTree();
	
	return 0;
}
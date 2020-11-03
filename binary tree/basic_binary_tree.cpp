# include <iostream>
using namespace std;
# include "binary_tree_node.h"

void print(Node<int>* root)
{
	if(root == NULL)
		return;
	cout << root->data << " :";
	if(root->left != NULL)
		cout << " L" <<root->left->data;
	if(root->right != NULL)
		cout << " R" <<root->right->data;
	cout << endl;
	print(root->left);
	print(root->right); 
}

Node<int>* takeInput()
{
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if(rootData == -1)
		return NULL;
	Node<int>* root = new Node<int>(rootData);
	root->left = takeInput();
	root->right = takeInput();
	return root;
}

int main()
{
	// Node<int>* root = new Node<int>(10);
	// Node<int>* node1 = new Node<int>(20);
	// Node<int>* node2 = new Node<int>(30);
	// root->left = node1;
	// root->right = node2;
	Node<int>* root = takeInput();
	cout << "binary tree :" << endl;
	print(root);
	delete root;
}
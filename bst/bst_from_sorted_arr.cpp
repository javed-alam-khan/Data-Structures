# include <iostream>
# include "binary_tree_node.h"
using namespace std;

void preorder(Node<int>* root)
{
	if(root == NULL)
		return;
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

Node<int>* constructBSTHelper(int* arr, int start, int end)
{
	if(end-start+1 == 0)
		return NULL;
	int mid = (start + end)/2;
	int rootData = arr[mid];
	Node<int>* root = new Node<int>(rootData);
	Node<int>* l = constructBSTHelper(arr, start, mid-1);
	Node<int>* r = constructBSTHelper(arr, mid+1, end);
	root->left = l;
	root->right = r;
	return root;
}

Node<int>* constructBST(int* arr, int size)
{
	int start = 0;
	int end = size - 1;
	return constructBSTHelper(arr, start, end);
}

int main()
{
	int size;
	cout << "Enter size" << endl;
	cin >> size;
	int *arr = new int[size];
	cout << "Enter elements" << endl;
	for(int i=0; i<size; i++)
		cin >> arr[i];
	Node<int>* root = constructBST(arr, size);
	preorder(root);
	cout << endl;
	delete root;
	return 0;
}
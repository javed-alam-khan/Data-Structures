# include<iostream>
# include"binary_tree_node.h"
# include<queue>
# include<string>
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
		// cout << "Enter left child data of Node " << front->data  << endl;
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->left = child;
		}
		
		// Right child input
		// cout << "Enter right child data of Node " << front->data  << endl;
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

void helper(Node<int> *root, int s, string str = "")
{
	if(root == NULL)
		return;
	if(root->left == NULL && root->right == NULL)
	{
		if(root->data == s)
		{
			str += to_string(root->data);
			cout << str << endl;
		}
	}
    string str1;
    string str2;
    if(str == "")
    {
     	str1 = to_string(root->data) + " ";
        str2 = to_string(root->data) + " ";   
    }
    else
    {
        str1 = str + " " + to_string(root->data) + " ";
		str2 = str + " " + to_string(root->data) + " ";
    }                             
	helper(root->left, s - root->data, str1);
	helper(root->right, s - root->data, str2);
}


void printNodesSumToS(Node<int> *root, int s)
{
	helper(root, s, "");
}


int main()
{
	Node<int>* root = inputLevelWise();
	int s;
	cin >> s;
	printNodesSumToS(root, s);
	delete root;
	return 0;
}

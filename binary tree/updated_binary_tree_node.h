template <typename T>
class node
{
	public:
	T data;
	node<T>* next;
	node(T data)
	{
		this->data = data;
		next = NULL;
	}
};

template <typename T>
class Node
{
	public:
	T data;
	Node<T>* left;
	// Node* left;
	Node<T>* right;
	// Node* right;
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

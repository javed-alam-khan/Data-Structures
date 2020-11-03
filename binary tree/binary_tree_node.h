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

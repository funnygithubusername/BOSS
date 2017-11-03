
struct node
{
	int data;
	node *left;
	node *right;
};

class BST
{
public:
	BST() : root(nullptr) {}
	void add(int x, node **tree);
	void del(node **tree);
	node search(node **tree, int key);
	void isempty(node **tree);
	void traverse(node **tree);
private:
	node* root;
};
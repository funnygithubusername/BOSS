
struct node
{
	int data;
	node *prev;
};

class Stack
{
public:
	Stack() : size(0), top(nullptr), it(nullptr) {}
	void push(int i);
	int pop();
	void output();
	void print(node **pointer);
	int empty();
	int prev();
private:
	int size;
	node *top;
	node *it;
	bool hasPrev();
};
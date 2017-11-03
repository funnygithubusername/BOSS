#include "tree.h"

#include "stdio.h"
#include "conio.h"
#include "clocale"


int main()
{
	setlocale(LC_ALL, "Russian");
	node *tree = NULL;
	BST ttree;
	int a[10] = { 7, 3, 10, 11, 8, 4, 5, 1, 6, 2 };
	for (int i = 0; i < 10; i++)
		ttree.add(a[i], &tree);
	ttree.traverse(&tree);
	ttree.search(&tree, 11);
	ttree.search(&tree, 111);
	ttree.del(&tree);
	_getch();
	return 0;
}
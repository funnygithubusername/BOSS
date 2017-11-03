#include "tree.h"

#include "stdio.h"
#include "conio.h"
#include "clocale"

void BST::add(int x, node **tree)
{
	if ((*tree) == NULL)
	{
		(*tree) = new node;
		(*tree)->data = x;
		(*tree)->left = nullptr;
		(*tree)->right = nullptr;
		return;
	}
	else
	if (x <= (*tree)->data)
		add(x, &(*tree)->left);
	else
		add(x, &(*tree)->right);
}

void BST::del(node **tree)
{
	if ((*tree) != NULL)
	if ((*tree)->left != NULL)
	{
		del(&((*tree)->left));
	}
	if ((*tree)->right != NULL)
	{
		del(&((*tree)->right));
	}
	delete *tree;
}


node BST::search(node **tree, int key)
{
	int fl = 0;
	if ((*tree) != NULL)
	{
		if ((*tree)->data == key)
		{
			fl = 1;
			printf_s("\n There is '%i' in tree", key);
			return (**tree);	
		}
		else
		{
			if (key <= (*tree)->data)
				return search(&(*tree)->left, key);
			else
				return search(&(*tree)->right, key);
		}
	}
	if (fl == 0)
		printf_s("\n There is no '%i' in tree", key);
}

void BST::isempty(node **tree)
{

}


void BST::traverse(node **tree)
{
	if ((*tree) == NULL)
		return;
	traverse(&(*tree)->left);
	printf_s("%i ", (*tree)->data);
	traverse(&(*tree)->right);
}
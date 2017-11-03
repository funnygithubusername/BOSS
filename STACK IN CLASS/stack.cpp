#include "stack.h"

#include "stdio.h"
#include "conio.h"
#include "clocale"


void Stack::push(int i)
{
	size++;
	node *tmp = new node;
	tmp->data = i;
	tmp->prev = top;
	top = tmp;
}

int Stack::pop()
{
	size--;
	node *tmp;
	int temp;
	tmp = top;
	temp = top->data;
	top = tmp->prev;
	delete tmp;
	return temp;
}

void Stack::output()
{
	node *pointer = top;
	printf_s("Значение вершины стэка %i\n", pointer->data);
	printf_s("Значения элементов стэка: ");
	for (int j = 0; j < size; j++)
	{
		printf_s("%i ", pointer->data);
		pointer = pointer->prev;
	}
}

void Stack::print(node **pointer)
{
	*pointer = top;
}

int Stack::empty()
{
	/*
	int FL = 0;
	if (top == nullptr)
	FL = 1;
	return FL;
	*/
	return top == nullptr ? true : false;
}

int Stack::prev() {
	int data = it->data;
	if (hasPrev()) {
		it = it->prev;
	}
	return data;
}

bool Stack::hasPrev() {
	return it->prev == nullptr ? false : true;
}


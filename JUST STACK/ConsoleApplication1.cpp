// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "clocale"
#include "iostream"

struct node
{
	int data;
	node *prev;
};

struct stack
{
	node *top;
};

void push(stack *s, int i);
int pop(stack *s);
void output(stack *s, int n);
void initialise(stack *s);

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n;
	int i;
	stack stk;
	initialise(&stk);
	printf_s("Введите количество элементов стэка\n");
	scanf_s("%i", &n);

	printf_s("Введите данные в стэк\n");
	for (int j = 0; j < n; j++)
	{
		scanf_s("%i", &i);
		push(&stk, i);
	}

	printf_s("Вывод содержимого стэка:\n");
	output(&stk, n);

	printf_s("\nУдаляем все элементы стэка...\n");
	for (int j = 0; j < n; j++)
		pop(&stk);
	printf_s("Стэк пуст\n");
	system("pause");
	return 0;
}


void initialise(stack *s)
{
	s->top = NULL; 
}

void push(stack *s, int i)
{
	node *tmp = new node;
	tmp->data = i;
	tmp->prev = s->top;
	s->top = tmp;
}

int pop(stack *s)
{
	node *tmp;
	int temp;
	tmp = s->top;
	temp = s->top->data;
	s->top = tmp->prev;
	delete tmp;
	return temp;
}

void output(stack *s, int n)
{
	node *pointer = s->top;
	printf_s("Значение вершины стэка %i\n", pointer->data);
	printf_s("Значения элементов стэка: ");
	for (int j = 0; j < n; j++)
	{
		printf_s("%i ", pointer->data);
		pointer = pointer->prev;
	}
}

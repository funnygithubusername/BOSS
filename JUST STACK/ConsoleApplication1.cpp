// ConsoleApplication5.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	printf_s("������� ���������� ��������� �����\n");
	scanf_s("%i", &n);

	printf_s("������� ������ � ����\n");
	for (int j = 0; j < n; j++)
	{
		scanf_s("%i", &i);
		push(&stk, i);
	}

	printf_s("����� ����������� �����:\n");
	output(&stk, n);

	printf_s("\n������� ��� �������� �����...\n");
	for (int j = 0; j < n; j++)
		pop(&stk);
	printf_s("���� ����\n");
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
	printf_s("�������� ������� ����� %i\n", pointer->data);
	printf_s("�������� ��������� �����: ");
	for (int j = 0; j < n; j++)
	{
		printf_s("%i ", pointer->data);
		pointer = pointer->prev;
	}
}

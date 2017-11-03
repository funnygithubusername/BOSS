#include "stack.h"

#include "stdio.h"
#include "conio.h"
#include "clocale"


int main()
{
	setlocale(LC_ALL, "Russian");
	Stack stk1;
	int n;
	int i;

	printf_s("������� ���������� ��������� �����\n");
	scanf_s("%i", &n);

	printf_s("������� ������ � ����\n");
	for (int j = 0; j < n; j++)
	{
		scanf_s("%i", &i);
		stk1.push(i);
	}

	if (stk1.empty() == 0)
	{
		node *pointer = nullptr;
		stk1.print(&pointer);
		printf_s("�������� ������� ����� %i\n", pointer->data);
		printf_s("�������� ��������� �����: ");
		for (int j = 0; j < n; j++)
		{
			printf_s("%i ", pointer->data);
			pointer = pointer->prev;
		}
		printf_s("\n������� ��� �������� �����...\n");
		for (int j = 0; j < n; j++)
			stk1.pop();
		printf_s("���� ����\n");
	}
	else
		printf_s("���� ����\n");

	_getch();
	return 0;
}

#include "stdio.h"
#include "conio.h"
#include "clocale"
#include "iostream"
#include "123.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	FABRIC fb;
	/*
	char *g[] = { "����� ��", "������" , "�����������" , "����"};
	char *n[] = { "�� ���", "�� ������", "�� �����", "� ��" };
	char *o[] = { ", �����!", ", ���������!", ", ������ �����!", ", ������!" };
	*/

	int numb;
	printf_s("������� ��������� ��������\n");
	scanf_s("%i", &numb);
	for (int i = 0; i < numb; i++)
	{
		fb.create();
		/*printf_s("%s %s %s \n", g[0 + rand() % 4], n[0 + rand() % 4], o[0 + rand() % 4]);*/
	}
	_getch();
	return 0;
}


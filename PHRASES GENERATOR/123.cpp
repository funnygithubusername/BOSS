#include "123.h"

#include "stdio.h"
#include "conio.h"
#include "iostream"

void FABRIC::create()
{
	char *g[] = { "����� ��", "������", "�����������", "����" };
	char *n[] = { "�� ���", "�� ������", "�� �����", "� ��" };
	char *o[] = { ", �����!", ", ���������!", ", ������ �����!", ", ������!" };
	printf_s("%s %s%s \n", g[0 + rand() % 4], n[0 + rand() % 4], o[0 + rand() % 4]);
}

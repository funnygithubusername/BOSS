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
	char *g[] = { "Пошел ты", "Следуй" , "Отправляйся" , "Беги"};
	char *n[] = { "на хер", "за мечтой", "за пивом", "в ад" };
	char *o[] = { ", козел!", ", красавчик!", ", жалкий червь!", ", хозяин!" };
	*/

	int numb;
	printf_s("Введите количесво слоганов\n");
	scanf_s("%i", &numb);
	for (int i = 0; i < numb; i++)
	{
		fb.create();
		/*printf_s("%s %s %s \n", g[0 + rand() % 4], n[0 + rand() % 4], o[0 + rand() % 4]);*/
	}
	_getch();
	return 0;
}


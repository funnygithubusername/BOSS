#include "123.h"

#include "stdio.h"
#include "conio.h"
#include "iostream"

void FABRIC::create()
{
	char *g[] = { "Пошел ты", "Следуй", "Отправляйся", "Беги" };
	char *n[] = { "на хер", "за мечтой", "за пивом", "в ад" };
	char *o[] = { ", козел!", ", красавчик!", ", жалкий червь!", ", хозяин!" };
	printf_s("%s %s%s \n", g[0 + rand() % 4], n[0 + rand() % 4], o[0 + rand() % 4]);
}

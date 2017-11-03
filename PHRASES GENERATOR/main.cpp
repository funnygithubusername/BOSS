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

	int numb;
	printf_s("Ââåäèòå êîëè÷åñâî ñëîãàíîâ\n");
	scanf_s("%i", &numb);
	for (int i = 0; i < numb; i++)
	{
		fb.create();
	}
	_getch();
	return 0;
}


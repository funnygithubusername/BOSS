// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"

int regs[4];
int reg0, reg1, reg2, reg3, reg4;
int ip = 0;
int code[] = { 0x1108, 0x1206, 0x2312, 0x0000};

int fetch();
void decode(int instr);
void eval(); 
void run();

int _tmain(int argc, _TCHAR* argv[])
{
	run();
	printf_s("regs:");
	for (int i = 0; i < 4; i++)
			printf_s(" %04x ", regs[i]);
	_getch ();
	return 0;
}

int fetch()
{
	return code[ip++];
}

void decode(int instr)
{
	reg0 = (instr & 0xF000) >> 12;
	reg1 = (instr & 0x0F00) >> 8;
	reg2 = (instr & 0x00F0) >> 4;
	reg3 = (instr & 0x000F);
	reg4 = (instr & 0x00FF);
}

void eval()
{
	switch(reg0)
	{
	case 1:
		regs[reg1] = reg4;
		break;
	case 2:
		regs[reg1] = regs[reg2] + regs[reg3];
		break;
	}
}

void run()
{
	for (int i = 0; i < 4; i++)
	{
	int instr = fetch();
	decode( instr);
	eval( );
	}
}
#include "stdafx.h"
#include"header.h"
#include"Defination.h"


extern int Time_Used(int *a);
static int*super_elite;
extern void Init_Factors();
extern void Init_Input();
extern int* Local_Optimal();
extern void Output_Total(int *);

int main()
{
	Init_Factors();
	Init_Input();
	super_elite=Local_Optimal();
	Output_Total(super_elite);
	return 0;
}

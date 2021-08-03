/* Co'digo main.c */
#include<stdio.h>
//Para rodar no windows
//#include<conio.h>
//biblioteca interna
#include"defs.h"

int main() {
	/* Carrega os nu'mero do dois tabuleiros */
	printf("\n -------:AllInit:-------\n");
	AllInit();
	printf("\n");
	U64 playBitBoard = 0ULL;	/*  Ainda na'o foi usada */

//	getch();
	//playBitBoard |= (1ULL << SQ64(D2));	
	ihm();							/* Imprime os bitmap 64 */
	//getch();
	playBitBoard |= (1ULL << SQ64(D2));	
	return 0;
}

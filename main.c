/* Co'digo main.c */
#include<stdio.h>
//Para rodar no windows
//#include<conio.h>
//biblioteca interna
#include"defs.h"

int main() {
	printf("\n ==============================\n");	
	printf("\n ----:Programa funciona:-------\n");
	printf("\n ------------------------------\n");
	/* Carrega os nu'mero do dois tabuleiros */
	printf("\n -------:AllInit:-------\n");
	AllInit();
	printf("\n");
	U64 playBitBoard = 0ULL;	/*  Ainda na'o foi usada */

//	getch();
	/* Criei essa func,a'o para na'o encher
	// main.c com programas que na'o sejam 
	// chamadas de func,o'es */
	ihm();							/* Imprime os bitmap 64 */
	//getch();
	
	return 0;
}

#include<stdio.h>
//Para rodar no windows
#include<conio.h>
//biblioteca interna
#include"defs.h"

int main() {
	printf("\n ==============================");	
	printf("\n ----:Programa funciona:-------");
	AllInit();
	/* Criei essa func,a'o para na'o encher
	// main.c com programas que na'o sejam 
	// chamadas de func,o'es */
	ihm();

	U64 playBitBoard = 0ULL;

	printf("\nStart:\n\n");
	PrintBitBoard(playBitBoard);

	playBitBoard |= (1ULL << SQ64(D2)); 
	printf("D2 Adicionado:\n\n");
	PrintBitBoard(playBitBoard);

	playBitBoard |= (1ULL << SQ64(G2));
	printf("G2 Adicionado:\n\n");
	PrintBitBoard(playBitBoard);

	getch();
	return 0;
}
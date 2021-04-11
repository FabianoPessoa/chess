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

	// Essa e' da aula anterior
	printf("\nStart:\n\n");
	PrintBitBoard(playBitBoard);

	playBitBoard |= (1ULL << SQ64(D2)); 
	printf("D2 Adicionado:\n\n");
	PrintBitBoard(playBitBoard);

	playBitBoard |= (1ULL << SQ64(G2));
	printf("G2 Adicionado:\n\n");
	PrintBitBoard(playBitBoard);

	//Nova implementac,a'o

	playBitBoard |= (1ULL << SQ64(D2));
	playBitBoard |= (1ULL << SQ64(D3));
	playBitBoard |= (1ULL << SQ64(D4));

	//Novar implementac,a'o
	printf("\n");
	PrintBitBoard(playBitBoard);

	int count = CNT(playBitBoard);

	printf("Count:%d\n", count);
	printf("\n");
	int index = POP(&playBitBoard);
	printf("index:%d\n",index);
	PrintBitBoard(playBitBoard);
	count = CNT(playBitBoard);
	printf("Count:%d\n",count);

	//retire se na'o for windows
	getch();
	return 0;
}
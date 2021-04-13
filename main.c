#include<stdio.h>
//Para rodar no windows
#include<conio.h>
//biblioteca interna
#include"defs.h"

int main() {
	printf("\n ==============================\n");	
	printf("\n ----:Programa funciona:-------\n");
	printf("\n ------------------------------\n");
	/* Carrega os nu'mero do dois tabuleiros */
	AllInit();
	printf("\n");
	getch();
	/* Criei essa func,a'o para na'o encher
	// main.c com programas que na'o sejam 
	// chamadas de func,o'es */
	ihm();							/* Imprime os bitmap 64 */
	getch();
	/*  Cria uma */
	U64 playBitBoard = 0ULL;

	// Essa e' da aula anterior
	printf("\nStart:\n\n");
	PrintBitBoard(playBitBoard);
	getch();

	playBitBoard |= (1ULL << SQ64(D2)); 
	/* Equivale a:
	* playBitBoard = playBitBoard | (1ULL << SQ64(D2));
	* acrescenta um 1 se na'o tiver 1
	*/
	printf("D2 Adicionado:\n\n");
	PrintBitBoard(playBitBoard);
	getch();

	playBitBoard |= (1ULL << SQ64(G2));
	printf("G2 Adicionado:\n\n");
	PrintBitBoard(playBitBoard);
	getch();

	//Nova implementac,a'o
	printf("\n Impreme em D2, D3, D4 \n");
	playBitBoard |= (1ULL << SQ64(D2));
	playBitBoard |= (1ULL << SQ64(D3));
	playBitBoard |= (1ULL << SQ64(D4));

	//Novar implementac,a'o
	printf("\n");
	PrintBitBoard(playBitBoard);
	getch();

	int count = CNT(playBitBoard);

	printf("Count:%d\n", count);

	/*  -------------------------------- */
	printf("\n");
	int index = POP(&playBitBoard);
	printf("index:%d\n",index);
	PrintBitBoard(playBitBoard);
	count = CNT(playBitBoard);
	printf("Count:%d\n",count);
	/* Remove as pec,as */
	int sq64 = 0;
	printf("\n Entrando no While \n");
	while (playBitBoard) {
		sq64 = POP(&playBitBoard);
		printf("popped:%d\n", sq64);
		PrintBitBoard(playBitBoard);
		getch();
	}
	//retire se na'o for windows
	getch();
	return 0;
}
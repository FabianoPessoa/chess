/*					ihm()						*/
#include <stdio.h>
#include <conio.h>
#include "defs.h"

// A func,a'o InitSq120To64() na'o foi mostrada
int ihm()
{	int index = 0;
	for(index = 0; index < BRD_SQ_NUM; ++index)
	{
		if(index%10==0) printf("\n");
		printf("%5d",Sq120ToSq64[index]);
	}	
	printf("\n");
	printf("\n");
	for(index = 0; index <64; ++index)
	{
		if(index%8==0) printf("\n");
		printf("%5d",Sq64ToSq120[index]);
	}
	/* Adicionado interface */
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
	int index2 = POP(&playBitBoard);
	printf("index:%d\n",index2);
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

	return 0;
}
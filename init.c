//init.c  Arquivo de impressao do tabuleiro
#include<stdio.h>
#include "defs.h"

int Sq120ToSq64[BRD_SQ_NUM];
int Sq64ToSq120[64];

void InitSq120To64()
{
	int index = 0;
	int file = FILE_A;
	int rank = RANK_1;
	int sq = A1;
	int sq64 = 0;
	//BRD_SQ_NUM e' 120
	// Coloca 65 em tudo
	for(index =0; index < BRD_SQ_NUM; ++index)
	{
		Sq120ToSq64[index] = 65;
	}
	// Coloca 120 em tudo
	for(index = 0; index < 64; ++index)
	{
		Sq64ToSq120[index] = 120;
	}
	// Coloca todos os numeros nos 
	// Sq120ToSq64 e Sq64ToSq120 corretos
	for(rank = RANK_1; rank<= RANK_8; ++rank)
	{
		for(file=FILE_A; file <=FILE_H; ++file)
		{	//Macro que 
			sq = FR2SQ(file,rank);
			Sq64ToSq120[sq64] = sq;
			Sq120ToSq64[sq] = sq64;
			sq64++;
		}
		
	}
}

void AllInit()
{	
	InitSq120To64();
	printf("\n ... ");
}
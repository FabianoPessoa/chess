/* Co'digo defs.h */
#ifndef DEFS_H
	#define DEFS_H
	
	#include "stdlib.h"
	
	/* 
	* Implementa a biblioteca stdlib.h
	* Para vefificar a linha e o tempo dos erro.
	*/
	/* 
	* Se eu na'o  quiser que rode a ferificac,a'o
	* E' so' comentar  alinha de baixo:
	* #define DEBUG
	*/
	#define DEBUG

	#ifndef DEBUG
	#define ASSERT (n)
	#else
	#define ASSERT (n) \
	if(!(n)) { \
	printf("%s - Failed",#n); \
	printf("On %s ",__DATE__ ); \
	printf("At %s ",__TIME__ ); \
	printf("In File %s ",__FILE__ ); \
	printf("At Line %d\n",__LINE__ ); \
	exit(1);}
	#endif
	/* ******************************************* */


	typedef unsigned long long U64;
	
	#define NAME "Vice 1.0"
	#define BRD_SQ_NUM 120						/* Quantidade de casas do bitmap grande */
	
	#define MAXGAMEMOVE 2048
	// //Pecas e casas notaveis
	enum {EMPTY, wP, wN, wB, wR, wQ, wK, bP, bN, bB, bR, bQ, bK};
	enum {FILE_A, FILE_B, FILE_C, FILE_D, FILE_E, FILE_F, FILE_G, FILE_H, FILE_NONE};
	enum {RANK_1, RANK_2, RANK_3, RANK_4, RANK_5, RANK_6, RANK_7, RANK_8, RANK_NONE};
	enum {WHITE, BLACK, BOTH};
	// //Definicao das casas do tabuleiro
	enum {
		A1 = 21, B1, C1, D1, E1, F1, G1, H1,
		A2 = 31, B2, C2, D2, E2, F2, G2, H2,
		A3 = 41, B3, C3, D3, E3, F3, G3, H3,
		A4 = 51, B4, C4, D4, E4, F4, G4, H4,
		A5 = 61, B5, C5, D5, E5, F5, G5, H5,
		A6 = 71, B6, C6, D6, E6, F6, G6, H6
	};
	
	enum {FALSE, TRUE};
	//Roque
	enum{WKCA = 1, WQCA = 2, BKCA = 4, BQCA = 8};
	// Estrutura de desfazeimento da jogada
	typedef struct{
		int move;
		int castlePerm;
		int enPas;
		int fiftyMove;
		U64 posKey;
	} S_UNDO;
	
	
	// // estrutura de flags de jogo
	typedef struct {
		// piece tera 120 posicoes
		int pieces[BRD_SQ_NUM];
		// declaracao de paws muito muito grande
		U64 paws[3];
		
		int KingSq[2];
		//Outros flags
		int side;
		int enPas;
		int fiftyMove;
		
		int ply;
		int hisPly;
		
		int castlePerm;
		
		U64 posKey;
		
		int pceNum[13];
		int bigPce[3];
		int majPce[3];
		int minPce[3];
		
		S_UNDO history[MAXGAMEMOVE];

		int pList[13][10];
		
	} S_BOARD;
	
	// ********* MACROS ****************
	// Verificar se essa macro funciona
	// Brilhante padra'o matemático de linhas e colunas
	// Essa macro roda em init.c
	// Ela associa as linhas e colunas cheias de 65
	// Na varia'vel Sq120ToSq64 e coloca a numerac,a'o do
	// 0 a 63 que define as casas do bitmap no tabuleiro de
	// Xadrez
	#define FR2SQ(f,r) ((21 + (f)) + ((r) * 10))
	#define SQ64(sq120) Sq120ToSq64[sq120]
	#define POP(b) PopBit(b)
	#define CNT(b) CountBits(b)
	#define CLRBIT(bb,sq) ((bb) &= ClearMask[(sq)])
	#define SETBIT(bb,sq) ((bb) |= SetMask[(sq)])
	// ********* GLOBAIS *************
	// Conversao de quadrados de 120 e de 64
	// variavel global extendida declarada em init.c
	extern int Sq120ToSq64[BRD_SQ_NUM];
	extern int Sq64ToSq120[64];
	extern U64 SetMask[64];
	extern U64 ClearMask[64];
	
	
	// ********** FUNCTIONS **************
	// Prototipo definico dentro de definicoes
	// Precisou ser declarada como extern porque
	// foi declarada em init.c
	// init.c
	extern void AllInit();
	extern int ihm();
	// bitboards.c
	extern void PrintBitBoard(U64 bb);
	// Novas funcoes declarada
	extern int PopBit(U64 *bb);
	extern int CountBits(U64 b);

#endif

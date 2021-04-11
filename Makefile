# C:\> mingw32-make
all:
	gcc -Wall main.c  init.c ihm.c bitboards.c defs.h
	gcc main.c  init.c ihm.c bitboards.c defs.h -o chess.exe -g
	
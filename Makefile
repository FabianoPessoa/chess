# C:\> mingw32-make
all:
	gcc main.c  init.c ihm.c bitboards.c defs.h -o chess.exe
	gcc -Wall main.c  init.c ihm.c bitboards.c defs.h
	
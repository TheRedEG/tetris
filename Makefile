
CC	=	gcc

SRC	=	display.c

NAME	=	Tetris

LIB	=	-W -Wall -Wextra 

all:
		$(CC) $(LIB) -o $(NAME) $(SRC) -lncurses

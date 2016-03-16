
CC	=	gcc

SRC	=	data/display.c \
		data/main.c

NAME	=	Tetris

LIB	=	-W -Wall -Wextra 

all:		$(NAME)
$(NAME):
		$(CC) $(LIB) -o $(NAME) $(SRC) -lncurses

fclean:		
		rm $(NAME)

re:		fclean all

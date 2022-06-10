##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME 	=	bin

CFLAGS	=	-L lib/my/ -lmy -g3 -Iinclude

all:	$(NAME)

$(NAME):	$(OBJ)
	@make -C ./lib/my/
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@make clean -C ./lib/my/
	@rm -f $(OBJ)

fclean:	clean
	@make fclean -C ./lib/my/
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re

##
## EPITECH PROJECT, 2018
## solo_stumper_2
## File description:
## Compilation Makefile
##

SRC	=	src/main.c	\
		src/dna_and_rna.c	\
		src/coding_sequence.c	\
		src/k_mers.c	\
		src/reverse_complement.c	\
		src/my_revstr.c

RM	=	rm -f

OBJ	=	$(SRC:.c=.o)

NAME	=	./FASTAtools

LIB     =	lib/my/libmy.a

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I include/

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -g -o $(NAME) $(SRC) $(CPPFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf *.o
	rm -rf *~
	rm -rf *#
	rm -rf lib/my/libmy.a
	rm -rf lib/my/*.o
	rm -rf lib/my/*~
	rm -rf lib/my/*#
	rm -rf include/*~
	rm -rf include/*#

re:	fclean all

.PHONY: all clean fclean re

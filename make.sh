#! /bin/sh

#make -C libft/ fclean && make -C libft/
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line get_next_line.c main.c -g libft/libft.a
#clang -Wall -Wextra -Werror -g -I libft/includes -o main.o -c main.c
#clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft

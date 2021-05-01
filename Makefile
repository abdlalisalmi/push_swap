# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 15:32:22 by aes-salm          #+#    #+#              #
#    Updated: 2021/05/01 17:12:23 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = 	includes/push_swap.h \
		functions/libft/ft_atoi.c \
		functions/libft/ft_strlen.c \
		functions/libft/ft_strcmp.c \
		functions/libft/ft_memset.c \
		functions/libft/ft_strjoin.c \
		functions/stack.c\
		functions/parsing.c \
		functions/is_sorted.c \
		functions/get_operation.c\
		functions/operations/swap_stack.c\
		functions/operations/push_stack.c\
		functions/operations/rotate_stack.c\
		functions/operations/reverse_rotate_stack.c\
		functions/ps_functions/find_median.c\
		functions/ps_functions/sort_array.c\
		functions/ps_functions/algorithme_3_5.c\
		functions/ps_functions/algorithme_100.c

$(NAME) : 	$(SRSC)
			@ $(CC) $(FLAGS) -c $(SRCS)
			@ ar rc $(NAME) *.o
			@ $(CC) $(FLAGS) checker.c $(NAME) -o checker -g
			@ $(CC) $(FLAGS) push_swap.c $(NAME) -o push_swap -g

all: 	$(NAME)

clean:
		@ rm -rf *.o

fclean: clean
		@ rm -rf $(NAME) checker includes/push_swap.h.gch

re: fclean $(NAME)


check:	re
	@ rm -rf *.o
	@ rm -rf $(NAME) includes/push_swap.h.gch
	printf 'ra\nra  ' | ./checker 4 1 2
# echo "sa\npb\npb\npb\nra\nrb\nrrr\nsa\npa\npa\npa" | ./checker 2 1 3 6 5 8


push:	re
	@ rm -rf *.o
	@ rm -rf $(NAME) includes/push_swap.h.gch
	./push_swap 30 20 95 53 62 36 29 34 77 52 94 8 22 18 15 44 82 7 40 73 23 47 58 87 49 81 25 69 83 56 9 14 75 33 92 5 70 68 38 43 99 28 48 41 51 60 11 13 4 80 89 98 55 12 21 79 100 97 66 76 26 91 65 54 93 42 27 16 32 35 39 78 96 24 63 85 10 46 84 88 19 50 3 72 57 1 86 74 37 45 2 61 31 6 59 71 67 17 64 90

ps: re
	@ rm -rf *.o
	@ rm -rf $(NAME) includes/push_swap.h.gch
	./push_swap 2 1 3 | ./checker 2 1 3


# ruby -e "puts (1..50).to_a.shuffle.join(' ')"
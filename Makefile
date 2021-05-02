# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 15:32:22 by aes-salm          #+#    #+#              #
#    Updated: 2021/05/02 16:53:52 by aes-salm         ###   ########.fr        #
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
	./push_swap 8 50 7 33 42 71 46 32 88 89 16 3 41 23 94 74 21 22 52 60 78 59 80 44 13 73 28 98 84 15 11 49 82 2 58 81 68 99 57 87 38 51 97 6 24 1 66 79 43 83 30 26 36 92 56 37 4 96 45 18 64 31 90 70 62 95 61 35 91 85 100 69 25 20 65 48 86 77 29 67 76 34 12 93 27 9 47 63 75 54 10 72 5 55 17 19 39 40 53 14
	
ps: re
	@ rm -rf *.o
	@ rm -rf $(NAME) includes/push_swap.h.gch
	./push_swap 2 1 3 | ./checker 2 1 3


# ruby -e "puts (1..50).to_a.shuffle.join(' ')"
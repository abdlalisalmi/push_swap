# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 15:32:22 by aes-salm          #+#    #+#              #
#    Updated: 2021/04/27 16:41:26 by aes-salm         ###   ########.fr        #
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
		functions/get_operation.c\
		functions/operations/swap_stack.c\
		functions/operations/push_stack.c\
		functions/operations/rotate_stack.c\
		functions/operations/reverse_rotate_stack.c\
		functions/ps_functions/find_median.c\
		functions/ps_functions/sort_array.c\

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
	./push_swap 3 1 4 2 5 8 6 7 | ./checker 3 1 4 2 5 8 6 7
# echo "sa\npb\npb\npb\nra\nrb\nrrr\nsa\npa\npa\npa" | ./checker 2 1 3 6 5 8


push:	re
	@ rm -rf *.o
	@ rm -rf $(NAME) includes/push_swap.h.gch
	./push_swap 14 2 95 66 79 57 8 16 5 26 37 90 31 22 9 41 39 12 83 19 76 87 36 7 43 69 35 40 18 42 25 67 27 97 45 99 91 46 6 94 21 77 32 75 48 4 52 3 33 28 29 86 73 38 65 47 80 63 96 24 64 59 54 84 72 55 85 44 70 51 100 50 23 17 11 30 98 10 60 88 1 92 82 93 78 81 34 49 89 20 68 61 74 71 13 56 62 58 15 53

push_swap: re
	@ rm -rf *.o
	@ rm -rf $(NAME) includes/push_swap.h.gch
	./push_swap 14 2 95 66 79 57 8 16 5 26 37 90 31 22 9 41 39 12 83 19 76 87 36 7 43 69 35 40 18 42 25 67 27 97 45 99 91 46 6 94 21 77 32 75 48 4 52 3 33 28 29 86 73 38 65 47 80 63 96 24 64 59 54 84 72 55 85 44 70 51 100 50 23 17 11 30 98 10 60 88 1 92 82 93 78 81 34 49 89 20 68 61 74 71 13 56 62 58 15 53 | ./checker 14 2 95 66 79 57 8 16 5 26 37 90 31 22 9 41 39 12 83 19 76 87 36 7 43 69 35 40 18 42 25 67 27 97 45 99 91 46 6 94 21 77 32 75 48 4 52 3 33 28 29 86 73 38 65 47 80 63 96 24 64 59 54 84 72 55 85 44 70 51 100 50 23 17 11 30 98 10 60 88 1 92 82 93 78 81 34 49 89 20 68 61 74 71 13 56 62 58 15 53

# ruby -e "puts (1..50).to_a.shuffle.join(' ')"
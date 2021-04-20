# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 15:32:22 by aes-salm          #+#    #+#              #
#    Updated: 2021/04/20 16:21:12 by aes-salm         ###   ########.fr        #
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

$(NAME) : 	$(SRSC)
			@ $(CC) $(FLAGS) -c $(SRCS)
			@ ar rc $(NAME) *.o
			# @ $(CC) $(FLAGS) checker.c $(NAME) -o checker -g
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
	echo "sa\npb\npb\npb\nra\nrb\nrrr\nsa\npa\npa\npa" | ./checker 2 1 3 6 5 8
	# ./checker 1 2 3 4 5 6


push:	re
	@ rm -rf *.o
	@ rm -rf $(NAME) includes/push_swap.h.gch
	./push_swap 3 1 4 2 5

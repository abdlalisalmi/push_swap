# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 15:32:22 by aes-salm          #+#    #+#              #
#    Updated: 2021/03/12 17:01:12 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = 	includes/push_swap.h \
		functions/ft_atoi.c \
		functions/ft_strlen.c \
		functions/ft_strcmp.c \
		functions/ft_memset.c \
		functions/stack.c\
		functions/parsing.c \
		functions/operations/swap_stack.c\
		functions/operations/push_stack.c\
		functions/operations/rotate_stack.c\
		functions/operations/reverse_rotate_stack.c\

$(NAME) : 	$(SRSC)
			@ $(CC) $(FLAGS) -c $(SRCS)
			@ ar rc $(NAME) *.o
			@ $(CC) $(FLAGS) checker.c $(NAME) -o checker

all: 	$(NAME)

clean:
		@ rm -rf *.o

fclean: clean
		@ rm -rf $(NAME) checker includes/push_swap.h.gch

re: fclean $(NAME)


test:	re
	@ rm -rf *.o
	@ rm -rf $(NAME) includes/push_swap.h.gch
	echo "sa\npb\npb\npb\nra\nrb\nrrr\nsa\npa\npa\npa" | ./checker 2 1 3 6 5 8

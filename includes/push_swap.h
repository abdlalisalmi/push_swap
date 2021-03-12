/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:49:19 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/12 17:02:43 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct  s_stack
{
    int         size;
    int         top;
    int         *items;
}               t_stack;



int	ft_atoi(const char *str);
int ft_strlen(char *str);
int ft_strcmp(char *str1, char *str2);
void	*ft_memset(void *str, int c, size_t n);

void    print_error(char *error);
int     duplicates_check(int *array, int len);
void    handle_operations(char *inst, t_stack *a, t_stack *b);
void    applicate_the_operation(char *operation, t_stack *a, t_stack *b);

t_stack* newStack(int size);
int is_empty(t_stack *stack);
int is_full(t_stack *stack);
void push(t_stack *stack, int item);
int pop(t_stack *stack);
int peek(t_stack *stack);

void swap_stack(t_stack *stack);
void push_stack(t_stack *stack1, t_stack *stack2);
void rotate_stack(t_stack *stack);
void reverse_rotate_stack(t_stack *stack);

#endif
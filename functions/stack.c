/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 10:39:03 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/06 13:16:24 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*newStack(t_stack *stack, int size)
{
	int	i;

	stack->size = size;
	stack->top = -1;
	stack->items = malloc(sizeof(int) * size);
	i = -1;
	while (++i < size)
		stack->items[i] = '\0';
	return (stack);
}

int	is_empty(t_stack *stack)
{
	return (stack->top == -1);
}

int	is_full(t_stack *stack)
{
	return (stack->top == stack->size - 1);
}

void	push(t_stack *stack, int item)
{
	if (!is_full(stack))
		stack->items[++stack->top] = item;
}

int	pop(t_stack *stack)
{
	int	item;

	if (!is_empty(stack))
	{
		item = stack->items[stack->top];
		stack->items[stack->top] = '\0';
		stack->top--;
		return (item);
	}
	return (-1);
}

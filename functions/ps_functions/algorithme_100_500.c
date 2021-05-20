/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme_100_500.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:09:27 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/20 18:27:43 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	scan_stack_from_top(t_stack *stack, int start, int end)
{
	int	top_index;

	top_index = stack->top;
	while (top_index-- > -1)
		if (stack->items[top_index] >= start && stack->items[top_index] <= end)
			return (top_index);
	return (-1);
}

int	scan_stack_from_bottom(t_stack *stack, int start, int end)
{
	int	i;

	i = -1;
	while (++i <= stack->top)
		if (stack->items[i] >= start && stack->items[i] <= end)
			return (i);
	return (-1);
}

void	choose_right_operation(t_stack *stack, int top_index, int bottom_index)
{
	if ((stack->top - top_index) < bottom_index)
		while (++top_index <= stack->top)
			rotate_stack(stack, "ra\n");
	else
		while (bottom_index-- >= 0)
			reverse_rotate_stack(stack, "rra\n");
}

void	chunk(t_stack *a, t_stack *b, int start, int end)
{
	int	hold_top_index;
	int	hold_bottom_index;
	int	find;

	find = 1;
	while (find)
	{
		find = 0;
		hold_top_index = scan_stack_from_top(a, start, end);
		if (hold_top_index > -1)
			find = 1;
		hold_bottom_index = scan_stack_from_bottom(a, start, end);
		if (hold_bottom_index > -1)
			find = 1;
		choose_right_operation(a, hold_top_index, hold_bottom_index);
		if (find)
			push_stack(b, a, "pb\n");
	}
}

void	one_to_five_hundred_numbers(t_stack *a, t_stack *b, int max, int step)
{
	int	start;
	int	bigger_index;
	int	*sorted;

	start = 0;
	while (start < max)
	{
		chunk(a, b, start, start + (step - 1));
		start += step;
	}
	sorted = sort_array(b->items, b->top);
	bigger_index = 0;
	while (b->top > -1)
	{
		bigger_index = get_element_index(b, sorted[b->top]);
		if (bigger_index < (int)(b->top / 2))
			while (bigger_index-- >= 0)
				reverse_rotate_stack(b, "rrb\n");
		else
			while (bigger_index++ < b->top)
				rotate_stack(b, "rb\n");
		push_stack(a, b, "pa\n");
	}
	free(sorted);
}

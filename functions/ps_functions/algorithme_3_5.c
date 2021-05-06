/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme_3_5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:48:18 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/06 12:31:56 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	three_numbers(t_stack *a)
{
	int	*sorted;
	int	bigger;
	int	smaller;

	sorted = sort_array(a->items, a->top);
	smaller = sorted[0];
	bigger = sorted[2];
	if (a->items[0] == bigger && a->items[1] == smaller)
		swap_stack(a, "sa\n");
	else if (a->items[2] == bigger && a->items[1] == smaller)
		rotate_stack(a, "ra\n");
	else if (a->items[2] == bigger && a->items[0] == smaller)
	{
		swap_stack(a, "sa\n");
		reverse_rotate_stack(a, "rra\n");
	}
	else if (a->items[1] == bigger && a->items[2] == smaller)
	{
		swap_stack(a, "sa\n");
		rotate_stack(a, "ra\n");
	}
	else if (a->items[1] == bigger && a->items[0] == smaller)
		reverse_rotate_stack(a, "rra\n");
	free(sorted);
}

void	five_numbers(t_stack *a, t_stack *b)
{
	int	i;
	int	median;

	median = find_median(a->items, a->size);
	i = -1;
	while (++i < a->size)
	{
		if (a->items[a->top] <= median)
			push_stack(b, a, "pb\n");
		reverse_rotate_stack(a, "rra\n");
	}
	three_numbers(a);
	if (b->top == 0)
		push_stack(a, b, "pa\n");
	else
	{
		if (b->items[0] > b->items[1])
			swap_stack(b, "sb\n");
		while (b->top > -1)
			push_stack(a, b, "pa\n");
	}
}

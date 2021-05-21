/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:09:27 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/21 12:14:05 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	one_hundred_numbers(t_stack *a, t_stack *b, int max, int step)
{
	int	bigger_index;
	int	*sorted;

	sorted = sort_array(a->items, a->top);
	if (max < step)
		chunk(a, b, sorted[0], sorted[max - 1]);
	else
		split_chunks(a, b, max, step);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:52:17 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/06 13:10:25 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_stack *a, t_stack *b)
{
	int	i;

	if (!is_empty(b))
		return (0);
	i = -1;
	while (++i <= a->top - 1)
	{
		if (a->items[i] < a->items[i + 1])
			return (0);
	}
	return (1);
}

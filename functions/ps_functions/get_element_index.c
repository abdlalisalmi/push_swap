/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_element_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:01:28 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/06 12:57:35 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	get_element_index(t_stack *stack, int el)
{
	int	i;

	i = -1;
	while (++i < stack->size)
	{
		if (stack->items[i] == el)
			return (i);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:27:36 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/21 11:39:59 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_median(int *array, int len)
{
	int	median;
	int	*sorted;

	sorted = sort_array(array, len);
	if (len == 4)
		median = sorted[0];
	else
		median = sorted[1];
	free(sorted);
	return (median);
}

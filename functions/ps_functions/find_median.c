/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:27:36 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/06 12:57:18 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_median(int *array, int len)
{
	int	median;
	int	*sorted;

	sorted = sort_array(array, len);
	if (len % 2 == 0)
		median = (sorted[(len - 1) / 2] + sorted[len / 2]) / 2;
	else
		median = sorted[len / 2];
	free(sorted);
	return (median);
}

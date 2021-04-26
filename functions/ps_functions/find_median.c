/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:27:36 by aes-salm          #+#    #+#             */
/*   Updated: 2021/04/26 13:56:50 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int find_median(int *array, int len)
{
    int median;
    int i;
    int array_copy[len];

    i = -1;
    while (++i < len)
        array_copy[i] = array[i];

    sort_array(array_copy, len);

    if(len % 2 == 0)
        median = (array_copy[(len-1)/2] + array_copy[len/2])/2;
    else
        median = array_copy[len/2];

    return median;
}

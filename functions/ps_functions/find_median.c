/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:27:36 by aes-salm          #+#    #+#             */
/*   Updated: 2021/04/07 13:06:38 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void sort_array(int *array, int len)
{
    int i;
    int j=0;
    int temp;

    i = -1;
    while (++i < len)
    {
        j = -1;
        while (++j < len - 1)
        {
            if(array[j] > array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }
}

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
        median = (array_copy[(len-1)/2] + array_copy[len/2])/2.0;
    else
        median = array_copy[len/2];

    return median;
}

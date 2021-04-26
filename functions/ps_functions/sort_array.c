/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 13:56:38 by aes-salm          #+#    #+#             */
/*   Updated: 2021/04/26 16:05:59 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int *sort_array(int *array, int len)
{
    int i;
    int j;
    int temp;
    int *new_array;

    new_array = malloc(sizeof(int) * (len - 1));
    i = -1;
    while (++i <= len)
        new_array[i] = array[i];
    i = 0;
    while (i <= len)
    {
        j = i + 1;
        while (j <= len)
        {
            if(new_array[i] > new_array[j])
            {
                temp = new_array[i];
                new_array[i] = new_array[j];
                new_array[j] = temp;
            }
            j++;
        }
        i++;
    }
    return (new_array);
}
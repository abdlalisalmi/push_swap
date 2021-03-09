/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:35:28 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/09 16:42:38 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    print_error(char *error)
{
    write(1, "Error\n", 6);
    write(1, error, ft_strlen(error));
    exit(EXIT_FAILURE);
}

int     duplicates_check(int *array, int len)
{
    int i;
    int j;
    int duplicate;

    i = -1;
    while (++i < len)
    {
        j = -1;
        duplicate = 0;
        while (++j < len)
        {
            if (array[i] == array[j])
                duplicate ++;
        }
        if (duplicate > 1)
            return (1);
    }
    return (0);
}
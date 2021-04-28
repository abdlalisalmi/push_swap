/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:35:28 by aes-salm          #+#    #+#             */
/*   Updated: 2021/04/28 12:51:19 by aes-salm         ###   ########.fr       */
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


void applicate_the_operation(char *operation, t_stack *a, t_stack *b)
{
    if (ft_strcmp(operation, "sa"))
        swap_stack(a);
    else if (ft_strcmp(operation, "sb"))
        swap_stack(b);
    else if (ft_strcmp(operation, "ss"))
    {
        swap_stack(a);
        swap_stack(b);
    }
    else if (ft_strcmp(operation, "pa"))
        push_stack(a, b);
    else if (ft_strcmp(operation, "pb"))
        push_stack(b, a);
    else if (ft_strcmp(operation, "ra"))
        rotate_stack(a);
    else if (ft_strcmp(operation, "rb"))
        rotate_stack(b);
        
    else if (ft_strcmp(operation, "rr"))
    {
        rotate_stack(a);
        rotate_stack(b);
    }
    else if (ft_strcmp(operation, "rra"))
        reverse_rotate_stack(a);
    else if (ft_strcmp(operation, "rrb"))
        reverse_rotate_stack(b);
    else if (ft_strcmp(operation, "rrr"))
    {
        reverse_rotate_stack(a);
        reverse_rotate_stack(b);
    }
    else
        print_error("This Instruction Does Not Exist\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:48:18 by aes-salm          #+#    #+#             */
/*   Updated: 2021/04/28 15:14:01 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void three_numbers(t_stack *a)
{
    int *sorted;
    int bigger;
    int smaller;

    if (a->top == 1)
        write(1, "sa\n", 3);
    else
    {
        sorted = sort_array(a->items, a->top);
        smaller = sorted[0];
        bigger = sorted[2];
        if (a->items[0] == bigger && a->items[1] == smaller)
            write(1, "sa\n", 3);
        else if (a->items[2] == bigger && a->items[1] == smaller)
            write(1, "ra\n", 3);
        else if (a->items[2] == bigger && a->items[0] == smaller)
            write(1, "sa\nrra\n", 7);
        else if (a->items[1] == bigger && a->items[2] == smaller)
            write(1, "sa\nra\n", 6);
        else if (a->items[1] == bigger && a->items[0] == smaller)
            write(1, "rra\n", 4);
    }
}
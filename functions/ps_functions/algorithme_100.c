/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:09:27 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/01 17:34:26 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int get_element_index(t_stack *stack, int el)
{
    int i;

    i = -1;
    while (++i < stack->size)
    {
        if (stack->items[i] == el)
            return (i);
    }
    return (0);
}

void chunk(t_stack *a, t_stack *b, int start, int end)
{
    int i;
    int hold_first;
    int hold_second;
    (void)b;

    hold_first = 0;
    hold_second = 0;
    i = a->top + 1;
    while (--i > -1)
    {
        if (a->items[i] >= start && a->items[i] <= end)
        {
            hold_first = a->items[i];
            break;
        }
    }
    printf("%d\n", hold_first);

    i = -1;
    while (++i < a->size)
    {
        if (a->items[i] >= start && a->items[i] <= end)
        {
            hold_second = a->items[i];
            break;
        }
    }
    printf("%d\n", hold_second);
    
}

void one_hundred_numbers(t_stack *a, t_stack *b)
{
    // int i;
    // int median;

    chunk(a, b, 0, 19);
}
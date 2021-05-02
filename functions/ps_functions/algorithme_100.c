/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme_100.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:09:27 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/02 17:39:23 by aes-salm         ###   ########.fr       */
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

// int scan_stack_from_top()
// {
//     int i;
    

// }

// int scan_stack_from_bottom()
// {
//     int i;
    
    
// }

void chunk(t_stack *a, t_stack *b, int start, int end)
{
    int i;
    int hold_first_index;
    int hold_second_index;
    int find;

    hold_first_index = 0;
    hold_second_index = 0;

    while (1)
    {
        find = 0;
    
        i = a->top + 1;
        while (--i > -1)
        {
            if (a->items[i] >= start && a->items[i] <= end)
            {
                hold_first_index = i;
                find = 1;
                break;
            }
        }
        i = -1;
        while (++i <= a->top)
        {
            if (a->items[i] >= start && a->items[i] <= end)
            {
                hold_second_index = i;
                find = 1;
                break;
            }
        }

        if ((a->top - hold_first_index) < hold_second_index)
        {
            while (++hold_first_index <= a->top)
                rotate_stack(a, "ra\n");
            
        } else {
            hold_second_index++;
            while (--hold_second_index >= 0)
                reverse_rotate_stack(a, "rra\n");
        }


        if (find)
            push_stack(b, a, "pb\n");
        else
            break;

    }
    
}

void one_hundred_numbers(t_stack *a, t_stack *b)
{
    int start;
    int i;
    int bigger_index;

    start = 0;
    i = 0;
    while (i++ < 5)
    {
        chunk(a, b, start, start+19);
        start+=20;
    }
    bigger_index = 0;
    while (b->top > -1)
    {
        i = -1;
        while (++i < b->top)
        {
            if (b->items[i] > b->items[bigger_index])
                bigger_index = i;
        }
        while (bigger_index < b->top)
        {
            rotate_stack(b, "rb\n");
            bigger_index++;
        }
        push_stack(a, b, "pa\n");

    }
        printf("%d\n", bigger_index);
        printf("%d\n", b->items[b->top]);
    
    
}
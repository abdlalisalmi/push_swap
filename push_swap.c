/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:33:44 by aes-salm          #+#    #+#             */
/*   Updated: 2021/04/25 22:31:39 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes/push_swap.h"

void my_quicksort(t_stack *a, t_stack *b)
{
    int top_half_len = 0;
    int i;
    int median;
    
    // if (a->top == -1)
    //     return

    median = find_median(a->items, a->top);
    // printf("%d\n", median);
    
    i = -1;
    while(++i <= a->top)
    {
        if (a->items[a->top] > median)
        {
            push_stack(b, a);
            write(1, "pb\n", 3);
            top_half_len++;
        }
        rotate_stack(a);
        write(1, "ra\n", 3);
    }
}


int main(int len, char **args)
{
    t_stack    a;
    t_stack    b;
    int i;
    
    if (len == 1)
        return (1);
    len = len - 1;
    newStack(&a, len);
    newStack(&b, len);
    i = len;
    while (--i >= 0)
        push(&a, ft_atoi(args[i+1]));
    if (duplicates_check(a.items, len))
        print_error("There Are Duplicates\n");

    my_quicksort(&a, &b);



    /// print stacks ///////
    // i = - 1;
    // printf("\na | ");
    // while (++i <= a.top)
    //     printf("%d ", a.items[i]);
    // printf("\n");
    // printf("b | ");
    // i = - 1;
    // while (++i <= b.top)
    //     printf("%d ", b.items[i]);
    // printf("\n\n");

    return (0);
}
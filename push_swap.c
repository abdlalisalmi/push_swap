/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:33:44 by aes-salm          #+#    #+#             */
/*   Updated: 2021/04/20 16:20:18 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes/push_swap.h"

void quicksort(t_stack *a, t_stack *b, int median)
{
    int top_half_len = 0;
    int i;
    // if (a->top == -1)
    //     return
    // choose a median //it's up to you to determine the best way to do this
    i = -1;
    while(++i <= a->top)
    {
        //filter all values above the median into list 2
        if (a->items[a->top] > median)
        {
            // push list 1 top to list 2 //list 2 stores the larger half
            // printf("%d\n", a->items[a->top]);
            push_stack(b, a);
            top_half_len++;
        }
        rotate_stack(a);
    }
}


int main(int len, char **args)
{
    (void)args;
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
    
    int median = find_median(a.items, a.top);
    printf("%d\n", median);

    quicksort(&a, &b, median);



    /// print stacks ///////
    i = - 1;
    printf("\na | ");
    while (++i <= a.top)
        printf("%d ", a.items[i]);
    printf("\n");
    printf("b | ");
    i = - 1;
    while (++i <= b.top)
        printf("%d ", b.items[i]);
    printf("\n\n");

    return (0);
}
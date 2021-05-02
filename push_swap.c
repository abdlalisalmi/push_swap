/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:33:44 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/02 17:10:21 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes/push_swap.h"

// void my_quicksort(t_stack *a, t_stack *b, int len)
// {
//     int top_half_len = 0;
//     int i;
//     int median;
    
//     if (len == 1)
//         return;
//     median = find_median(a->items, len + 1);
//     // printf("%d\n", median);
    
//     i = -1;
//     while(++i <= len)
//     {
//         if (a->items[a->top] > median)
//         {
//             push_stack(b, a);
//             // write(1, "pb\n", 3);
//             top_half_len++;
//         }
//         reverse_rotate_stack(a);
//         // write(1, "rra\n", 3);
//     }
    
//     //reverse the list back to original position
//     i = -1;
//     while(++i <= (len - top_half_len))
//     {
//         reverse_rotate_stack(a);
//         // write(1, "rra\n", 3);
//     }
//     //push larger half onto smaller half
//     i = -1;
//     while(++i <= top_half_len)
//     {
//         push_stack(a, b);
//         // write(1, "pa\n", 3);
//     }
    
//     my_quicksort(a, b, top_half_len);
    
// }

int get_index(int *array, int el, int len)
{
    int i;
    int index;

    index = 0;
    i = 0;
    while (i <= len)
    {
        if (array[i] == el)
            index = i;
        i++;
    }
    return (index);
}

int main(int len, char **args)
{
    t_stack    a;
    t_stack    b;
    int i;
    
    if (len <= 2)
        return (1);
    len = len - 1;
    newStack(&a, len);
    newStack(&b, len);
    i = len;
    while (--i >= 0)
        push(&a, ft_atoi(args[i+1]));
    if (duplicates_check(a.items, len))
        print_error("There Are Duplicates\n");

    if (is_sorted(&a, &b))
        return(0);
    else if (len <= 3)
        three_numbers(&a);
    else if (len <= 5)
        five_numbers(&a, &b);
    else if (len <= 100)
        one_hundred_numbers(&a, &b);
    else if (len <= 500)
        printf("500 number\n");
    
    

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
    // /// end print stacks ///////

    return (0);
}
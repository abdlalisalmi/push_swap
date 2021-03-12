/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:46:26 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/12 16:47:15 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int main(int len, char **args)
{
    t_stack    *a;
    t_stack    *b;

    char instructions[1024];
    int i;
    
    if (len == 1)
        return (1);
    len = len - 1;
    b = newStack(len);
    a = newStack(len);
    i = len;
    while (--i >= 0)
        push(a, ft_atoi(args[i+1]));
    if (duplicates_check(a->items, len))
        print_error("There Are Duplicates\n");
    read(0, instructions, 1024);
    handle_operations(instructions, a, b);

    /// print stacks ///////
    i = - 1;
    printf("\na | ");
    while (++i <= a->top)
        printf("%d ", a->items[i]);
    printf("\n");
    printf("b | ");
    i = - 1;
    while (++i <= b->top)
        printf("%d ", b->items[i]);
    printf("\n\n");
    
    return (0);
}
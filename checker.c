/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:46:26 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/11 18:04:39 by aes-salm         ###   ########.fr       */
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
    a = newStack(len);
    b = newStack(len);
    printf("%d\n", b->top);
    printf("%d\n", a->top);
    i = len;
    while (--i >= 0)
        push(a, ft_atoi(args[i+1]));

    if (duplicates_check(a->items, len))
        print_error("There Are Duplicates\n");
    read(0, instructions, 1024);

    printf("%d\n", b->top);
    printf("%d\n", a->top);

    handle_operations(instructions, a, b);
    
    i = len;
    while (--i >= 0)
        printf("\n%d %d", a->items[i], b->items[i]);
    printf("\n- -");
    printf("\na b\n\n");
    
    return (0);
}
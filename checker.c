/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:46:26 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/11 12:39:02 by aes-salm         ###   ########.fr       */
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
    i = len;
    while (--i >= 0)
        push(a, ft_atoi(args[i+1]));

    if (duplicates_check(a->items, len))
        print_error("There Are Duplicates\n");
    read(0, instructions, 1024);
    handle_operations(instructions, a, b);

    i = len;
    while (--i >= 0)
        printf("%d %d\n", a->items[i], b->items[i]);
    printf("- -\n");
    printf("a b\n");
    
    return (0);
}
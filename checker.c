/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:46:26 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/21 15:23:11 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void free_stack(t_stack *stack)
{
    free(stack->items);
    free(stack);
}

int is_sorted(t_stack *a, t_stack *b)
{
    int i;

    if (!is_empty(b))
        return (0);
    i = -1;
    while (++i <= a->top - 1)
    {
        if (a->items[i] < a->items[i + 1])
            return (0);
    }
    return (1);
}

int main(int len, char **args)
{
    t_stack    *a;
    t_stack    *b;

    char *operation;
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

    while (get_operation(&operation) > 0)
		applicate_the_operation(operation, a, b);

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
    // /// end print stacks ///////

    if (is_sorted(a, b))
        write(1, "OK\n", 3);
    else
        write(1, "KO\n", 3);
    // free_stack(a);
    // free_stack(b);
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:03:55 by aes-salm          #+#    #+#             */
/*   Updated: 2021/04/30 17:22:55 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void swap_stack(t_stack *stack, char *print)
{
    int elem1;
    int elem2;

    if (!is_empty(stack) || stack->top == 1)
    {
        elem1 = pop(stack);
        elem2 = pop(stack);
        push(stack, elem1);
        push(stack, elem2);
        if (print)
            write(1,print, ft_strlen(print));
    }
}

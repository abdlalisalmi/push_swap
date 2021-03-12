/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:03:55 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/12 16:57:33 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void swap_stack(t_stack *stack)
{
    int elem1;
    int elem2;

    if (!is_empty(stack) || stack->top == 1)
    {
        elem1 = pop(stack);
        elem2 = pop(stack);
        push(stack, elem1);
        push(stack, elem2);
    }
}

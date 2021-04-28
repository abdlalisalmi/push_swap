/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:19:17 by aes-salm          #+#    #+#             */
/*   Updated: 2021/04/28 12:39:02 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void rotate_stack(t_stack *stack)
{
    int i;
    int tmp[stack->size];
    int top_item;
    int len;

    if (is_empty(stack) || stack->top == 0)
        return;
    len = stack->top;
    top_item = pop(stack);
    i = -1;
    while (!is_empty(stack))
        tmp[++i] = pop(stack);
    push(stack, top_item);
    while (--len >= 0)
        push(stack, tmp[len]);
}

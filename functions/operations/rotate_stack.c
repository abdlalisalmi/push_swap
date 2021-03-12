/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:19:17 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/12 16:50:28 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void rotate_stack(t_stack *stack)
{
    int i;
    int tmp[stack->top];
    int top_item;
    int len;

    len = stack->top;
    top_item = pop(stack);
    i = -1;
    while (!is_empty(stack))
        tmp[++i] = pop(stack);
    push(stack, top_item);
    while (--len >= 0)
        push(stack, tmp[len]);
}
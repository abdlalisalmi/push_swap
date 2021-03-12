/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:38:24 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/12 16:50:33 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void reverse_rotate_stack(t_stack *stack)
{
    int i;
    int tmp[stack->top];
    int last_item;
    int len;

    len = stack->top;
    i = -1;
    while (stack->top > 0)
        tmp[++i] = pop(stack);
    last_item = pop(stack);
    while (--len >= 0)
        push(stack, tmp[len]);
    push(stack, last_item);
}
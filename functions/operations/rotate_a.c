/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:19:17 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/11 17:25:52 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void rotate_a_b(t_stack *stack)
{
    int i;
    int tmp[stack->top];
    int top_item;
    int len;

    top_item = pop(stack);
    len = stack->top;
    i = -1;
    while (!is_empty(stack))
        tmp[++i] = pop(stack);
    push(stack, top_item);
    len++;
    while (--len >= 0)
        push(stack, tmp[len]);
}
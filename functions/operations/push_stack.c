/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:12:27 by aes-salm          #+#    #+#             */
/*   Updated: 2021/04/30 17:17:36 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void push_stack(t_stack *stack1, t_stack *stack2, char *print)
{
    if (!is_empty(stack2))
    {
        push(stack1, pop(stack2));
        if (print)
            write(1,print, ft_strlen(print));
    }
    return;
}
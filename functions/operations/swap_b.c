/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:10:59 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/11 12:11:30 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void swap_b(t_stack *b)
{
    int elem1;
    int elem2;

    if (is_empty(b) || b->top == 1)
        return;
    elem1 = pop(b);
    elem2 = pop(b);
    push(b, elem1);
    push(b, elem2);
}

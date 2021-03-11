/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:03:55 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/11 12:10:40 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void swap_a(t_stack *a)
{
    int elem1;
    int elem2;

    if (is_empty(a) || a->top == 1)
        return;
    elem1 = pop(a);
    elem2 = pop(a);
    push(a, elem1);
    push(a, elem2);
}

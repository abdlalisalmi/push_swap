/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:46:26 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/07 22:33:01 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int main(int len, char **args)
{
    t_stacks    stacks;
    int i;
    
    if (len == 1)
        return (1);
    stacks.a = malloc(sizeof(int) * (len - 1));
    stacks.b = malloc(sizeof(int) * (len - 1));
    i = -1;
    while (++i < len - 1)
    {
        stacks.a[i] = ft_atoi(args[i+1]);
        printf("%d\n", stacks.a[i]);
    }
    
    return (0);
}
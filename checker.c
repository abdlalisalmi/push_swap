/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:46:26 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/10 18:10:20 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int main(int len, char **args)
{
    t_stacks    stacks;
    char instructions[1024];
    int i;
    
    if (len == 1)
        return (1);
    stacks.a = malloc(sizeof(int) * (len - 1));
    stacks.b = malloc(sizeof(int) * (len - 1));
    i = -1;
    while (++i < len - 1)
        stacks.a[i] = ft_atoi(args[i+1]);
    if (duplicates_check(stacks.a, len - 1))
        print_error("There Are Duplicates\n");
    read(0, instructions, 1024);
    handle_operations(instructions);
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:46:26 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/09 19:29:23 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int main(int len, char **args)
{
    t_stacks    stacks;
    char *instruction;
    int i;
    
    if (len == 1)
        return (1);
    stacks.a = malloc(sizeof(int) * (len - 1));
    stacks.b = malloc(sizeof(int) * (len - 1));
    instruction = NULL;
    i = -1;
    while (++i < len - 1)
        stacks.a[i] = ft_atoi(args[i+1]);
    if (duplicates_check(stacks.a, len - 1))
        print_error("There Are Duplicates\n");
    while (read(0, instruction, 3))
    {
        instruction = delete_new_line_from_input(instruction);
        printf("%s\n", instruction);
    }
    printf("CTRL + D\n");
    return (0);
}
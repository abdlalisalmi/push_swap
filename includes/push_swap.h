/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:49:19 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/09 19:20:20 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct  s_stacks
{
    int *a;
    int *b;
}       t_stacks;



int	ft_atoi(const char *str);
int ft_strlen(char *str);

void    print_error(char *error);
int     duplicates_check(int *array, int len);
char	*delete_new_line_from_input(char const *input);

#endif
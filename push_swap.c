/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:33:44 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/05 14:08:35 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int len, char **args)
{
	t_stack	a;
	t_stack	b;
	int		i;

	if (len <= 2)
		return (1);
	len = len - 1;
	newStack(&a, len);
	newStack(&b, len);
	i = len;
	while (--i >= 0)
		push(&a, ft_atoi(args[i + 1]));
	if (duplicates_check(a.items, len))
		print_error("There Are Duplicates\n");
	if (is_sorted(&a, &b))
		return (0);
	else if (len <= 3)
		three_numbers(&a);
	else if (len <= 5)
		five_numbers(&a, &b);
	else if (len <= 100)
		one_to_five_hundred_numbers(&a, &b, 100, 20);
	else
		one_to_five_hundred_numbers(&a, &b, len, 40);
	return (0);
}

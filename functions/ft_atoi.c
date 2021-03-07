
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:52:10 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/13 18:52:13 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_atoi(const char *str)
{
	int		result;
	int		sign;
	int		i;

	result = 0;
	sign = 0;
	i = 0;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			print_error("some arguments are not integers\n");
		result = result * 10;
		result += (int)str[i] - '0';
		i++;
	}
	if (sign == 1)
		return (-result);
	else
		return (result);
}

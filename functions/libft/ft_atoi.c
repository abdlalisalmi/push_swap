
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

#include "../../includes/push_swap.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 0;
	i = 0;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '+' || str[i] == '-')
		print_error("Incorrectly Formatted\n");
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			print_error("Some Arguments Are Not Integers\n");
		result = result * 10;
		result += (int)str[i] - '0';
		i++;
	}
	if ((result > 2147483647 && sign == 0) || (result > 2147483648 && sign == 1))
		print_error("Some Arguments Are Bigger Than An Integer\n");
	if (sign == 1)
		return (-result);
	else
		return (result);
}

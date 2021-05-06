/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_operation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 15:04:04 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/06 13:09:22 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_operation(char **operation)
{
	char	*buffer;
	int		ret;

	buffer = (char *)malloc(2);
	*operation = (char *)malloc(1);
	*operation[0] = '\0';
	ret = 1;
	while (ret)
	{
		ret = read(0, buffer, 1);
		if (ret)
		{
			if (buffer[0] == '\n' || ret == EOF)
				break ;
			*operation = ft_strjoin(*operation, buffer[0]);
		}
	}
	free(buffer);
	return (ret);
}

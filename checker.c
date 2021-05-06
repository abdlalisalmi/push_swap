/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:46:26 by aes-salm          #+#    #+#             */
/*   Updated: 2021/05/06 14:23:45 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/*
** print stucks values
*/
void	print_stucks(t_stack *a, t_stack *b)
{
	int	i;

	i = -1;
	printf("\na | ");
	while (++i <= a->top)
		printf("%d ", a->items[i]);
	printf("\n");
	printf("b | ");
	i = -1;
	while (++i <= b->top)
		printf("%d ", b->items[i]);
	printf("\n\n");
}

void	check_stucks(t_stack *a, t_stack *b)
{
	if (is_sorted(a, b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int len, char **args)
{
	t_stack	a;
	t_stack	b;
	char	*operation;
	int		i;

	if (len < 2)
		return (1);
	len = len - 1;
	newStack(&a, len);
	newStack(&b, len);
	i = len;
	while (--i >= 0)
		push(&a, ft_atoi(args[i + 1]));
	if (a.size == 1)
		return (0);
	if (duplicates_check(a.items, len))
		print_error("There Are Duplicates\n");
	while (get_operation(&operation) > 0)
		applicate_the_operation(operation, &a, &b);
	if (operation[0] != '\0')
		applicate_the_operation(operation, &a, &b);
	print_stucks(&a, &b);
	check_stucks(&a, &b);
	return (0);
}

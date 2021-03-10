/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:35:28 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/10 18:15:16 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    print_error(char *error)
{
    write(1, "Error\n", 6);
    write(1, error, ft_strlen(error));
    exit(EXIT_FAILURE);
}

int     duplicates_check(int *array, int len)
{
    int i;
    int j;
    int duplicate;

    i = -1;
    while (++i < len)
    {
        j = -1;
        duplicate = 0;
        while (++j < len)
        {
            if (array[i] == array[j])
                duplicate ++;
        }
        if (duplicate > 1)
            return (1);
    }
    return (0);
}

char	*delete_new_line_from_input(char const *input)
{
	char	*sub;
	int	i;

	if (!input || !(sub = malloc(sizeof(char) * 5)))
		return (NULL);
	i = 0;
	while (input[i] != '\0' && input[i] != '\n')
	{
		sub[i] = input[i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

void applicate_the_operation(char *instruction)
{
    if (ft_strcmp(instruction, "sa"))
        printf("sa OK\n");
    else if (ft_strcmp(instruction, "sb"))
        printf("sb OK\n");
    else if (ft_strcmp(instruction, "ss"))
        printf("ss OK\n");
    else if (ft_strcmp(instruction, "pa"))
        printf("pa OK\n");
    else if (ft_strcmp(instruction, "pb"))
        printf("pb OK\n");
    else if (ft_strcmp(instruction, "ra"))
        printf("ra OK\n");
    else if (ft_strcmp(instruction, "rb"))
        printf("rb OK\n");
    else if (ft_strcmp(instruction, "rr"))
        printf("rr OK\n");
    else if (ft_strcmp(instruction, "rra"))
        printf("rra OK\n");
    else if (ft_strcmp(instruction, "rrb"))
        printf("rrb OK\n");
    else if (ft_strcmp(instruction, "rrr"))
        printf("rrr OK\n");
    else
        print_error("This Instruction Does Not Exist\n");
}

void handle_operations(char *instructions)
{
    int i;
    int j;
    char operation[4];

    i = -1;
    j = -1;
    while (instructions[++i])
    {
        operation[++j] = instructions[i];
        if (instructions[i] == '\n')
        {
            operation[j] = '\0';
            applicate_the_operation(operation);
            j = -1;
        }
    }
}
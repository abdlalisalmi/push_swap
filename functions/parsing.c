/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:35:28 by aes-salm          #+#    #+#             */
/*   Updated: 2021/03/11 17:51:47 by aes-salm         ###   ########.fr       */
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

// char	*delete_new_line_from_input(char const *input)
// {
// 	char	*sub;
// 	int	i;

// 	if (!input || !(sub = malloc(sizeof(char) * 5)))
// 		return (NULL);
// 	i = 0;
// 	while (input[i] != '\0' && input[i] != '\n')
// 	{
// 		sub[i] = input[i];
// 		i++;
// 	}
// 	sub[i] = '\0';
// 	return (sub);
// }

void applicate_the_operation(char *operation, t_stack *a, t_stack *b)
{
    if (ft_strcmp(operation, "sa"))
        swap_a(a);
    else if (ft_strcmp(operation, "sb"))
        swap_a(b);
    else if (ft_strcmp(operation, "ss"))
    {
        swap_a(a);
        swap_a(b);
    }
    else if (ft_strcmp(operation, "pa"))
        push_a(a, b);
    else if (ft_strcmp(operation, "pb"))
        push_b(a, b);
    else if (ft_strcmp(operation, "ra"))
        rotate_a_b(a);
    else if (ft_strcmp(operation, "rb"))
        rotate_a_b(b);
        
    else if (ft_strcmp(operation, "rr"))
        printf("rr OK\n");
    else if (ft_strcmp(operation, "rra"))
        printf("rra OK\n");
    else if (ft_strcmp(operation, "rrb"))
        printf("rrb OK\n");
    else if (ft_strcmp(operation, "rrr"))
        printf("rrr OK\n");
    else
        print_error("This Instruction Does Not Exist\n");
}

void handle_operations(char *inst, t_stack *a, t_stack *b)
{
    int i;
    int j;
    char operation[4];

    i = -1;
    j = -1;
    while (inst[++i])
    {
        operation[++j] = inst[i];
        if (inst[i] == '\n')
        {
            operation[j] = '\0';
            applicate_the_operation(operation, a, b);
            j = -1;
        }
    }
}
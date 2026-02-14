/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:57:33 by veronikasko       #+#    #+#             */
/*   Updated: 2026/02/14 18:29:32 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_duplicates(t_node *stack);
static void	free_split_safe(char **split);

t_node	*parse_args(int argc, char **argv)
{
	t_node	*stack_a;

	stack_a = NULL;
	if (argc == 2)
		stack_a = parse_args_split(argv[1]);
	else
		stack_a = parse_args_multi(argc, argv);
	check_duplicates(stack_a);
	return (stack_a);
}

t_node	*parse_args_split(char *arg)
{
	char	**split;
	t_node	*stack;
	long	num;
	int		i;

	stack = NULL;
	split = ft_split(arg, ' ');
	if (!split || !split[0])
	{
		free_split_safe(split);
		return (NULL);
	}
	i = 0;
	while (split[i])
	{
		if (!ft_atol(split[i], &num))
		{
			free_split_safe(split);
			error_exit_simple();
		}
		node_add_back(&stack, new_node(num));
		i++;
	}
	free_split_safe(split);
	return (stack);
}

t_node	*parse_args_multi(int argc, char **argv)
{
	t_node	*stack;
	int		i;
	long	num;

	stack = NULL;
	i = 1;
	while (i < argc)
	{
		if (!ft_atol(argv[i], &num))
			error_exit_simple();
		node_add_back(&stack, new_node(num));
		i++;
	}
	return (stack);
}

static void	check_duplicates(t_node *stack)
{
	t_node	*i;
	t_node	*j;

	i = stack;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->number == j->number)
				error_exit_simple();
			j = j->next;
		}
		i = i->next;
	}
}

static void	free_split_safe(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

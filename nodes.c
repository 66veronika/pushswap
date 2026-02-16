/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:57:30 by veronikasko       #+#    #+#             */
/*   Updated: 2026/02/16 10:43:54 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int content)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	new->number = content;
	new->index = 0;
	new->next = NULL;
	return (new);
}

void	node_add_back(t_node **stack, t_node *new)
{
	t_node	*current;

	if (!new || !stack)
		return ;
	if (!*stack)
		*stack = new;
	else
	{
		current = *stack;
		while (current->next)
			current = current->next;
		current->next = new;
	}
}

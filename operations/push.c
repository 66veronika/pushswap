/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:45:16 by veronikasko       #+#    #+#             */
/*   Updated: 2026/02/11 20:50:36 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_node **a, t_node **b)
{
	t_node	*temp;

	if (!a || !*a)
		return ;
	temp = *a;
	*a = temp->next;
	temp->next = *b;
	*b = temp;
	write(1, "pb\n", 3);
}

void	pa(t_node **a, t_node **b)
{
	t_node	*temp;

	if (!b || !*b)
		return ;
	temp = *b;
	*b = temp->next;
	temp->next = *a;
	*a = temp;
	write(1, "pa\n", 3);
}
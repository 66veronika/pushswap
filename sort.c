/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:57:34 by veronikasko       #+#    #+#             */
/*   Updated: 2026/02/17 12:04:35 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bits(t_node *stack)
{
	int		max;
	int		bits;
	t_node	*tmp;

	max = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_node **a, t_node **b)
{
	int		size;
	int		max_bit_count;
	int		bit;
	int		i;
	t_node	*tmp;

	size = stack_size(*a);
	max_bit_count = max_bits(*a);
	bit = 0;
	while (bit < max_bit_count)
	{
		i = 0;
		while (i < size)
		{
			tmp = *a;
			if ((tmp->index >> bit) & 1)
				ra(a);
			else
				pb(a, b);
			i++;
		}
		while (*b)
			pa(a, b);
		bit++;
	}
}

int	is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->index > stack->next->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}

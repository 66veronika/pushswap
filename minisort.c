/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 09:40:34 by veronikasko       #+#    #+#             */
/*   Updated: 2026/02/18 16:40:29 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min_number(t_node *a);

void	sort_two(t_node **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	sa(a);
}

void	sort_three(t_node **a)
{
	int	first;
	int	second;
	int	third;

	if (!a || !*a || !(*a)->next || !(*a)->next->next)
		return ;
	first = (*a)->index;
	second = (*a)->next->index;
	third = (*a)->next->next->index;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

void	minisort(t_node **a, t_node **b)
{
	int	pos;
	int	size;

	size = stack_size(*a);
	while (size > 3)
	{
		pos = find_min_number(*a);
		if (pos == 0)
			pb(a, b);
		else if (pos <= size / 2)
			ra(a);
		else
			rra(a);
		size = stack_size(*a);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}

static int	find_min_number(t_node *a)
{
	int	min;
	int	pos;
	int	i;

	min = a->index;
	pos = 0;
	i = 0;
	while (a)
	{
		if (a->index < min)
		{
			min = a->index;
			pos = i;
		}
		a = a->next;
		i++;
	}
	return (pos);
}

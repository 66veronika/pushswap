/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 00:40:13 by veronikasko       #+#    #+#             */
/*   Updated: 2026/02/15 18:35:56 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit_simple(t_node **stack)
{
	if (stack && *stack)
		free_stack(stack);
	write(2, "Error\n", 6);
	exit(1);
}

void	error_exit(t_node **a, t_node **b)
{
	if (a && *a)
		free_stack(a);
	if (b && *b)
		free_stack(b);
	write(2, "Error\n", 6);
	exit(1);
}

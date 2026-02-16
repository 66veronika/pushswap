/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 00:40:13 by veronikasko       #+#    #+#             */
/*   Updated: 2026/02/16 12:01:43 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(t_node **stack)
{
	if (stack && *stack)
		free_stack(stack);
	write(2, "Error\n", 6);
	exit(1);
}


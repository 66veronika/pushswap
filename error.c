/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 00:40:13 by veronikasko       #+#    #+#             */
/*   Updated: 2026/02/16 16:11:49 by vskopova         ###   ########.fr       */
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

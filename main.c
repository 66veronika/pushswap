/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vskopova <vskopova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:27:05 by vskopova          #+#    #+#             */
/*   Updated: 2026/02/15 19:54:26 by vskopova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	a = parse_args(argc, argv);
	if (!a)
		return (0);
	index_stack(a);
	size = stack_size(a);
	if (size == 2 && !is_sorted(a))
		sort_two(&a);
	else if (size == 3 && !is_sorted(a))
		sort_three(&a);
	else if (!is_sorted(a))
		radix_sort(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}

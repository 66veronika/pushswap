/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:57:31 by veronikasko       #+#    #+#             */
/*   Updated: 2026/02/14 13:25:41 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_array(int	*arr, t_node *stack)
{
	int	i;

	i = 0;
	while(stack)
	{
		arr[i] = stack->number;
		i++;
		stack = stack->next;
	}
}

static void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

static void	add_index(t_node *stack, int *arr, int size)
{
	int	i;

	while (stack)
	{
		i = 0;
		while (i < size)
		{
			if (stack->number == arr[i])
			{
				stack->index = i;
				break;
			}
			i++;
		}
		stack = stack->next;
	}
}

void index_stack(t_node *stack)
{
	int	size;
	int	*arr;

	size = stack_size(stack);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		error_exit_simple();
	fill_array(arr, stack);
	sort_array(arr, size);
	add_index(stack, arr, size);

	free(arr);
}


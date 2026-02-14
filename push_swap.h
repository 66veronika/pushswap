/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:57:28 by veronikasko       #+#    #+#             */
/*   Updated: 2026/02/14 14:24:37 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				number;
	int				index;
	struct s_node	*next;
}	t_node;

t_node	*parse_args(int argc, char **argv);
t_node	*parse_args_split(char *arg);
t_node	*parse_args_multi(int argc, char **argv);
int	ft_atol(char *str, long *num);
int	len_check(char *str);

void index_stack(t_node *stack);
char	**ft_split(char const *s, char c);
void	check_empty_split(char **split);

int	max_bits(t_node *stack);
void	radix_sort(t_node **a, t_node **b);
int	is_sorted(t_node *stack);
void	sort_two(t_node **a);
void	sort_three(t_node **a);

void	error_exit_simple(void);
void	error_exit(t_node **a, t_node **b);

t_node	*new_node(int content);
void	node_add_back(t_node **stack, t_node *new);

void	free_stack(t_node **stack);
int	stack_size(t_node *stack);

void	pb(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	sa(t_node **a);
void	ss(t_node **a, t_node **b);
void	ra(t_node **a);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);

#endif
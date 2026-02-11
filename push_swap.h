/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:57:28 by veronikasko       #+#    #+#             */
/*   Updated: 2026/02/10 23:57:29 by veronikasko      ###   ########.fr       */
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
t_node *parse_args_multi(int argc, char **argv);
static void	error_exit(void);
static void	check_duplicates(t_node *stack);
int	ft_atol(char *str, long *num);

char	**ft_split(char const *s, char c);
static int	word_count(char const *s, char c);
static void	free_split(char **split, int j);
static char	*get_word(char const *s, char c, int *i);

t_node	*newnode(int content);
void	node_add_back(t_node **stack, t_node *new);
int	stack_size(t_node *stack);


#endif
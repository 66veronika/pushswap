#include "push_swap.h"

t_node	*newnode(int content)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->number = content;
	new->index = 0;

	new->next = NULL;
	return (new);
}

void destroy_node(t_node *node)
{
	if (node)
		free(node);
}

void	node_add_back(t_node )
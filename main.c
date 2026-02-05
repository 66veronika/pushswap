#include "push_swap.h"
#include <stdio.h>

int	main(void)
{
	t_node	*node1 = ft_newnode(3);
	printf("%d\n", node1->number);

	
	ft_destroy_node(node1);

}
#include "push_swap.h"

t_node	*parse_args(int argc, char **argv)
{
	t_node	*stack_a;

	stack_a = NULL;
	if (argc == 2)
		stack_a = parse_args_split(argv[1]);
	else
		stack_a = parse_args_multi(argc, argv);
	check_dupicates(stack_a);
	return (stack_a);
}

t_node	*parse_args_split(char *arg)
{
	char	**split;
	int		i;
	int		num;
	t_node	*stack;

	stack = NULL;
	split = ft_split(arg, ' ');
	if (!split)
		error_exit();
	i = 0;
	while (split[i])
	{
		if (!ft_atol(split[i], &num))
			error_exit();
		node_add_back(&stack, new_node(num));
		i++;
	}
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (stack);
}
t_node *parse_args_multi(int argc, char **argv)
{
	t_node	*stack;
	int		i;
	int		num;

	stack = NULL;
	i = 1;
	while (i < argc)
	{
		if (!ft_atol(argv[i], &num))
			error_exit();
		add_back(&stack, new_node(num));
		i++;
	}
	return (stack);
}

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
#include "push_swap.h"

t_node *parse_args(int argc, char **argv)
{
    t_node *stack;
    
    stack = NULL;
    if (argc == 2)
        stack = parse_args_split(argv[1]);
    else
        stack = parse_args_multi(argc, argv);
    check_duplicates(stack);
    return stack;
}

t_node *parse_args_split(char *arg)
{
    char    **spl;
    t_node  *stack;
    int     i;
    int     num;

    stack = NULL;
    spl = ft_split(arg, ' ');
    if (!spl)
        error_exit();
    i = 0;
    while (spl[i])
    {
        if (!ft_atol(spl[i], &num))
            error_exit();
        add_back(&stack, new_node(num));
        i++;
    }
	i = 0;
    while (spl[i])
	{
		free(spl[i]);
		i++;
	}
	free(spl);
    return stack;
}


t_node *parse_args_multi(int argc, char **argv)
{
    t_node  *stack;
    int     i;
    int     num;

    stack = NULL;
    i = 1;
    while (i < argc)
    {
        if (!ft_atol(argv[i], &num))
            error_exit();
        add_back(&stack, new_node(num));
        i++;
    }
    return stack;
}


void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_atol(char *str, long *num)
{
	int		i;
	int 	sign;
	long	result;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] < 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		result = result * 10 + (str[i] - '0');
		if (result * sign > INT_MAX || result * sign < INT_MIN)
			return (0);
		i++;
	}
	*num = result * sign;
	return(1);
}

void check_duplicates(t_node *stack)
{
    t_node *i;
    t_node *j;

    i = stack;
    while (i)
    {
        j = i->next;
        while (j)
        {
            if (i->value == j->value)
                error_exit();
            j = j->next;
        }
        i = i->next;
    }
}

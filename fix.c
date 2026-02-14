#include "push_swap.h"

// Safe free helper
static void	free_split_safe(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

// Get a single word from a string (skip spaces)
static char	*get_word(const char *s, char c, int *i)
{
	int		start;
	int		len;
	char	*word;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	len = 0;
	while (s[*i] && s[*i] != c)
	{
		(*i)++;
		len++;
	}
	if (len == 0)
		return (NULL);
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	len = 0;
	while (start < *i)
		word[len++] = s[start++];
	word[len] = '\0';
	return (word);
}

// Count words separated by c
static int	word_count(const char *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

// Split a string safely
char	**ft_split(const char *s, char c)
{
	char	**split;
	int		i;
	int		j;
	char	*word;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		word = get_word(s, c, &i);
		if (word)
			split[j++] = word;
	}
	split[j] = NULL;
	return (split);
}

// Parser for single argument (handles empty string safely)
t_node	*parse_args_split(char *arg)
{
	char	**split;
	t_node	*stack;
	long	num;
	int		i;

	stack = NULL;
	split = ft_split(arg, ' ');
	if (!split || !split[0])
	{
		free_split_safe(split);
		return (NULL); // just return, do nothing for empty input
	}
	i = 0;
	while (split[i])
	{
		if (!ft_atol(split[i], &num))
		{
			free_split_safe(split);
			error_exit_simple();
		}
		node_add_back(&stack, new_node(num));
		i++;
	}
	free_split_safe(split);
	return (stack);
}

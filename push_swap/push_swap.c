/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:46:07 by robegarc          #+#    #+#             */
/*   Updated: 2023/02/28 15:19:08 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	strlen_neg_pos(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static int	count_words(const char *str, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (count);
}

static char	*copy_words(const char *str, int start, int end)
{
	char	*out;
	int		i;

	i = 0;
	out = (char *)malloc(sizeof(char) * ((end - start) + 1));
	while (start < end)
		out[i++] = str[start++];
	out[i] = 0;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		start;
	int		j;

	split = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !split)
		return (0);
	start = -1;
	i = 0;
	j = 0;
	while (i <= strlen_neg_pos(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == strlen_neg_pos(s)) && start >= 0)
		{
			split[j++] = copy_words(s, start, i);
			start = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

t_node	*new_node(int v)
{
	t_node	*out;

	out = (t_node *)malloc(sizeof(t_node));
	if (!out)
	{
		free(out);
		return (NULL);
	}
	out->data = v;
	out->next = 0;
	return (out);
}


void	print_stks(t_node *a, t_node *b)
{
	int		i, j;

	i = 0;
	ft_printf("\nSTACK A\n\n");
	while (a)
	{
		ft_printf("%d. %d\n", ++i, a->data);
		a = a->next;
	}
	j = 0;
	ft_printf("\nSTACK B\n\n");
	while (b)
	{
		ft_printf("%d. %d\n", ++j, b->data);
		b = b->next;
	}
	ft_printf("\n#########################\n\n");
}

void	fill_stack(t_node **a, int ac, char **av, int i)
{
	while (i < ac)
		in_tail(a, new_node(ft_atoi(av[i++])));
}

void	init(int ac, char **av, t_node **a)
{
	char	**temp;
	int		len;

	temp = NULL;
	len = 0;
	if (ac == 2)
	{
		temp = ft_split(av[1], ' ');
		while (temp[len] != NULL)
			len++;
		fill_stack(a, len, temp, 0);
	}
	else if (ac >= 3)
		fill_stack(a, ac, av, 1);
}

int main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	else
		init(ac, av, &a);
	print_stks(a, b);
	// pb(&a, &b, 1);
	// print_stks(a, b);
	// pb(&a, &b, 1);
	// print_stks(a, b);
	// pb(&a, &b, 1);
	// print_stks(a, b);
	// pb(&a, &b, 1);
	// print_stks(a, b);
	// pb(&a, &b, 1);
	// print_stks(a, b);
	// rrr(&a, &b, 1);
	// print_stks(a, b);
	// ft_exit(&a);
	// ft_exit(&b);
}

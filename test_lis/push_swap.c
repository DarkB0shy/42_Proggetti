/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:46:07 by robegarc          #+#    #+#             */
/*   Updated: 2023/03/01 14:55:00 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_node	*new_node(int v)
// {
// 	t_node	*out;

// 	out = (t_node *)malloc(sizeof(t_node));
// 	if (!out)
// 	{
// 		free(out);
// 		return (NULL);
// 	}
// 	out->data = v;
// 	out->next = 0;
// 	return (out);
// }


// void	print_stks(t_node *a, t_node *b)
// {
// 	int		i, j;

// 	i = 0;
// 	ft_printf("\nSTACK A\n\n");
// 	while (a)
// 	{
// 		ft_printf("%d. %d\n", ++i, a->data);
// 		a = a->next;
// 	}
// 	j = 0;
// 	ft_printf("\nSTACK B\n\n");
// 	while (b)
// 	{
// 		ft_printf("%d. %d\n", ++j, b->data);
// 		b = b->next;
// 	}
// 	ft_printf("\n#########################\n\n");
// }

// void	sort_3(t_node **a)
// {
// 	t_node *n = *a;

// 	if ((n->data < n->next->data) && (n->data < n->next->next->data) &&
// 	 (n->next->data > n->next->next->data))
// 	{
// 		sa(a, 1);
// 		ra(a, 1);
// 	}
// 	else if ((n->data > n->next->data) && (n->data > n->next->next->data) &&
// 	 (n->next->data > n->next->next->data))
// 	{
// 		sa(a, 1);
// 		rra(a, 1);
// 	}
// 	else if ((n->data < n->next->data) && (n->data > n->next->next->data) &&
// 	 (n->next->data > n->next->next->data))
// 		rra(a, 1);
// 	else if ((n->data > n->next->data) && (n->data > n->next->next->data) &&
// 	 (n->next->data < n->next->next->data))
// 		ra(a, 1);
// 	else if ((n->data > n->next->data) && (n->data < n->next->next->data) &&
// 	 (n->next->data < n->next->next->data))
// 		sa(a, 1);
// }

// void	start_game(t_stack *a, t_node *b, int size)
// {
// 	(void)b;
// 	// if (is_sorted(a) == 0)
// 	// {
// 		if (size == 2)
// 			sa(a, 1);
// 		else if (size == 3)
// 			sort_3(a);
// 	// }
// }

// t_stack	*new_stack(int dim)
// {
// 	t_stack	*out;

// 	out = (t_stack *)malloc(sizeof(t_stack));
// 	if (!out)
// 	{
// 		free(out);
// 		return (0);
// 	}
// 	out->a = (int *)malloc(sizeof(int));
// 	out->b = (int *)malloc(sizeof(int));
// 	out->len = dim;
// 	return (out);
// }

void	print_arraya(t_stack *stack, int len)
{
	int	i;

	i = 0;
	ft_printf("\n\t\tSTACK A\n\n");
	while (i < len)
		ft_printf("\t\t%d\n", stack->a[i++]);
}

void	print_arrayb(t_stack *stack, int len)
{
	int	i;

	i = 0;
	ft_printf("\n\t\tSTACK B\n\n");
	while (i < len)
		ft_printf("\t\t%d\n", stack->b[i++]);
}

void	fill_stack(int ac, char **av, int i, t_stack *stack)
{
	int j;
	
	stack->a = (int *)malloc(sizeof(int) * (ac - 1));
	stack->b = (int *)malloc(sizeof(int) * (ac - 1));
	j = 0;
	while (i < ac)
		stack->a[j++] = ft_atoi(av[i++]);
	stack->curr_a = j;
	stack->curr_b = 0;
}

t_stack	*init(int ac, char **av)
{
	char	**tmp;
	int		len;
	t_stack *stack;

	tmp = NULL;
	len = 0;
	if (ac == 2)
	{
		tmp = ft_split(av[1], ' ');
		while (tmp[len] != NULL)
			len++;
		stack = malloc(len * sizeof(t_stack));
		fill_stack(len, tmp, 0, stack);
		free(tmp);
	}
	else if (ac >= 3)
	{
		stack = malloc((ac - 1) * sizeof(t_stack));
		fill_stack(ac, av, 1, stack);
	}
	else
		return (NULL);
	return (stack);
}


int main(int ac, char **av)
{
	t_stack	*stack;
	// t_stack	*b = NULL;
	
	if (ac < 2)
		return (0);
	stack = init(ac, av);
	// print_arraya(stack, stack->curr_a);
	// pb(stack, 1);
	// pb(stack, 1);
	// pb(stack, 1);
    longest_is(stack);	
	print_arraya(stack, stack->curr_a);
    // rrb(stack, 1);
	// ft_printf("\n\n=========================================\n\n");
	// print_arraya(stack, stack->curr_a);
	// print_arrayb(stack, stack->curr_b);
	// start_game(a, b, ft_lst_size(&a));
	// print_stks(a, b);
	// ft_exit(&a);
	// ft_exit(&b);
}
	// }
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
	// rr(&a, &b, 1);
	// print_stks(a, b);
// }

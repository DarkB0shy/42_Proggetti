#include "push_swap.h"

int	pa(t_stack *stack, int f)
{
	int	len;

	len = stack->curr_a;
	while (len > 0)
	{
		stack->a[len] = stack->a[len - 1];
		len--;
	}
	stack->curr_a++;
	stack->a[0] = stack->b[0];
	len = 1;
	while (len < stack->curr_b)
	{
		stack->b[len - 1] = stack->b[len];
		len++;
	}
	stack->curr_b--;
	if (f == 1)
		ft_printf("pa\n");
	stack->n_moves++;
	return (1);
}

int	pb(t_stack *stack, int f)
{
    int	len;

	len = stack->curr_b;
	while (len > 0)
	{
		stack->b[len] = stack->b[len - 1];
		len--;
	}
	stack->curr_b++;
	stack->b[0] = stack->a[0];
	len = 1;
	while (len < stack->curr_a)
	{
		stack->a[len - 1] = stack->a[len];
		len++;
	}
	stack->curr_a--;
	if (f == 1)
		ft_printf("pb\n");
	stack->n_moves++;
	return (1);
}

int	ra(t_stack *stack, int f)
{
    int i;
    int tmp;

    i = -1;
    tmp = stack->a[0];
    while (++i < stack->curr_a - 1)
        stack->a[i] = stack->a[i + 1]; 
    stack->a[i] = tmp;
	if (f == 1)
		ft_printf("ra\n");
	stack->n_moves++;
	return (1);
}

int	rra(t_stack *stack, int f)
{
	int	len;
    int tmp;

    tmp = stack->a[stack->curr_a - 1];
	len = stack->curr_a;
	while (len-- > 0)
		stack->a[len] = stack->a[len - 1];
    stack->a[0] = tmp;
	if (f == 1)
		ft_printf("rra\n");
	stack->n_moves++;
	return (1);
}
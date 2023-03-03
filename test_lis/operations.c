#include "push_swap.h"

int	sa(t_stack *stack, int f)
{
	int		tmp;
	
    if(!stack->a[0] || !stack->a[1])
        return (0);
    tmp = stack->a[0];
    stack->a[0] = stack->a[1];
    stack->a[1] = tmp;
	if (f == 1)
		ft_printf("sa\n");
	stack->n_moves++;
	return (1);
}

int	sb(t_stack *stack, int f)
{
	int		tmp;
	
	if (!stack->b[0] || !stack->b[1])
		return (0);
	tmp = stack->b[0];
    stack->b[0] = stack->b[1];
    stack->b[1] = tmp;
	if (f == 1)
		ft_printf("sb\n");
	stack->n_moves++;
	return (1);
}

int	ss(t_stack *stack, int f)
{
    int tmp;
    
	if(!stack->a[0] || !stack->a[1] || !stack->b[0] || !stack->b[1])
        return (0);
    tmp = stack->a[0];
    stack->a[0] = stack->a[1];
    stack->a[1] = tmp;
    tmp = stack->b[0];
    stack->b[0] = stack->b[1];
    stack->b[1] = tmp;
	if (f == 1)
		ft_printf("ss\n");
	stack->n_moves++;
	return (1);
}

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

int	rb(t_stack *stack, int f)
{
	int i;
    int tmp;

    i = -1;
    tmp = stack->b[0];
    while (++i < stack->curr_b - 1)
        stack->b[i] = stack->b[i + 1]; 
    stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rb\n");
	stack->n_moves++;
	return (1);
}

int	rr(t_stack *stack, int f)
{
	int i;
    int tmp;

    i = -1;
    tmp = stack->a[0];
    while (++i < stack->curr_a - 1)
        stack->a[i] = stack->a[i + 1]; 
    stack->a[i] = tmp;
    i = -1;
    tmp = stack->b[0];
    while (++i < stack->curr_b - 1)
        stack->b[i] = stack->b[i + 1]; 
    stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rr\n");
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
		ft_printf("rra");
	stack->n_moves++;
	return (1);
}

int	rrb(t_stack *stack, int f)
{
	int	len;
    int tmp;

    tmp = stack->b[stack->curr_b - 1];
	len = stack->curr_b;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
    stack->b[0] = tmp;
	if (f == 1)
		ft_printf("rrb");
	stack->n_moves++;
	return (1);
}

int	rrr(t_stack *stack, int f)
{
	int	len;
    int tmp;

    tmp = stack->a[stack->curr_a - 1];
	len = stack->curr_a;
	while (len-- > 0)
		stack->a[len] = stack->a[len - 1];
    stack->a[0] = tmp;
    tmp = stack->b[stack->curr_b - 1];
	len = stack->curr_b;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
    stack->b[0] = tmp;
	if (f == 1)
		ft_printf("rrr\n");
	stack->n_moves++;
	return (1);
}

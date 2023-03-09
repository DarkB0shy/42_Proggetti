#include "../incl/push_swap.h"

/*push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.*/
int	pa(t_stack *stack, int f)
{
	int	len;

	len = stack->len_A;
	while (len > 0)
	{
		stack->a[len] = stack->a[len - 1];
		len--;
	}
	stack->len_A++;
	stack->a[0] = stack->b[0];
	len = 1;
	while (len < stack->len_B)
	{
		stack->b[len - 1] = stack->b[len];
		len++;
	}
	stack->len_B--;
	if (f == 1)
		ft_printf("pa\n");
	stack->moves++;
	return (1);
}

/*push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.*/
int	pb(t_stack *stack, int f)
{
    int	len;

	len = stack->len_B;
	while (len > 0)
	{
		stack->b[len] = stack->b[len - 1];
		len--;
	}
	stack->len_B++;
	stack->b[0] = stack->a[0];
	len = 1;
	while (len < stack->len_A)
	{
		stack->a[len - 1] = stack->a[len];
		len++;
	}
	stack->len_A--;
	if (f == 1)
		ft_printf("pb\n");
	stack->moves++;
	return (1);
}
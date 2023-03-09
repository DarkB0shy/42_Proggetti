#include "../incl/push_swap.h"

int	rra(t_stack *stack, int f)
{
	int	len;
    int tmp;

    tmp = stack->a[stack->len_A - 1];
	len = stack->len_A;
	while (len-- > 0)
		stack->a[len] = stack->a[len - 1];
    stack->a[0] = tmp;
	if (f == 1)
		ft_printf("rra\n");
	stack->moves++;
	return (1);
}

/*reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.*/
int	rrb(t_stack *stack, int f)
{
	int	len;
    int tmp;

    tmp = stack->b[stack->len_B - 1];
	len = stack->len_B;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
    stack->b[0] = tmp;
	if (f == 1)
		ft_printf("rrb\n");
	stack->moves++;
	return (1);
}

/*rra and rrb at the same time.*/
int	rrr(t_stack *stack, int f)
{
	int	len;
    int tmp;

    tmp = stack->a[stack->len_A - 1];
	len = stack->len_A;
	while (len-- > 0)
		stack->a[len] = stack->a[len - 1];
    stack->a[0] = tmp;
    tmp = stack->b[stack->len_B - 1];
	len = stack->len_B;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
    stack->b[0] = tmp;
	if (f == 1)
		ft_printf("rrr\n");
	stack->moves++;
	return (1);
}

#include "../incl/push_swap.h"

int	ra(t_stack *stack, int f)
{
    int i;
    int tmp;

    i = -1;
    tmp = stack->a[0];
    while (++i < stack->len_A - 1)
        stack->a[i] = stack->a[i + 1]; 
    stack->a[i] = tmp;
	if (f == 1)
		ft_printf("ra\n");
	stack->moves++;
	return (1);
}

/*rotate b - shift up all elements of stack b by 1. The first element becomes the last one.*/
int	rb(t_stack *stack, int f)
{
	int i;
    int tmp;

    i = -1;
    tmp = stack->b[0];
    while (++i < stack->len_B - 1)
        stack->b[i] = stack->b[i + 1]; 
    stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rb\n");
	stack->moves++;
	return (1);
}

/*ra and rb at the same time.*/
int	rr(t_stack *stack, int f)
{
	int i;
    int tmp;

    i = -1;
    tmp = stack->a[0];
    while (++i < stack->len_A - 1)
        stack->a[i] = stack->a[i + 1]; 
    stack->a[i] = tmp;
    i = -1;
    tmp = stack->b[0];
    while (++i < stack->len_B - 1)
        stack->b[i] = stack->b[i + 1]; 
    stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rr\n");
	stack->moves++;
    return (1);
}
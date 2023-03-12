#include "push_swap.h"

int	sa(t_stack *stack, int f)
{
	int		tmp;
	
  tmp = stack->a[0];
  stack->a[0] = stack->a[1];
  stack->a[1] = tmp;
	if (f == 1)
		ft_printf("sa\n");
	stack->n_moves++;
	return (1);
}

void  sort_three(t_stack *stacks)
{
  if (stacks->a[0] > stacks->a[1] && stacks->a[1] > stacks->a[2])
  {
    sa(stacks, 1);
    rra(stacks, 1);
  }
  else if (stacks->a[0] < stacks->a[2] && stacks->a[1] > stacks->a[2])
  {
    rra(stacks, 1);
    sa(stacks, 1);
  }
  else if (stacks->a[0] < stacks->a[2] && stacks->a[1] < stacks->a[0])
    sa(stacks, 1);
  else if (stacks->a[2] > stacks->a[1] && stacks->a[0] > stacks->a[2])
    ra(stacks, 1);
  else if (stacks->a[0] > stacks->a[2] && stacks->a[1] > stacks->a[0])
    rra(stacks, 1);
}

void longest_is(t_stack *stacks)
{
  while (stacks->curr_a >= 0)
  {    
    if (check_full_order(stacks) == stacks->curr_a - 1)
      break;
    if (stacks->curr_a == 3)
    {
      sort_three(stacks);
      break;
    }
    get_min_on_top_of_a_hardon_mode(stacks);
    pb(stacks, 1);
  }
  while (stacks->curr_b > 0)
    pa(stacks, 1);
}
#include "push_swap.h"

void longest_is(t_stack *stacks)
{
  while (stacks->curr_a > 0)
  {
    if (check_full_order(stacks) == stacks->curr_a - 1)
      break;
    get_min_on_top_of_a_hardon_mode(stacks);
    if (check_full_order(stacks) == stacks->curr_a - 1)
      break;
    pb(stacks, 1);
  }
  while (stacks->curr_b > 0)
    pa(stacks, 1);
}
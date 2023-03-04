#include "push_swap.h"

int get_min_index_from_a(t_stack *stack_a)
{
  int i;
  int min;
  int j;

  i = 0;
  min = 0;
  min = stack_a->a[i];
  while (i < stack_a->curr_a)
  {
    j = 0;
    if (min > stack_a->a[i])
    {  
      min = stack_a->a[i];
      while (j < stack_a->curr_a)
      {
        if (min > stack_a->a[j])
          min = stack_a->a[j];
        j++;
      }
    }
    i++;
  }
  i = 0;
  while (1)
  {
    if (stack_a->a[i] == min)
      break;
    i++;
  }
  return (i);
}

int min_is_up(t_stack *stack_a, int min_index)
{
  int   min_is_up_;
  int   i;

  i = 0;
  min_is_up_ = 0;
  while (stack_a->a[i])
  {
    if (i == min_index)
    {
      min_is_up_ = 1;
      break;
    }
    if (i >= ((int)stack_a->curr_a)/2)
      break;
    i++;
  }
  return (min_is_up_);
}

int get_n_rotations(t_stack *stack_a)
{
  int min_index;
  int n_rotations;

  n_rotations = 0;
  min_index = 0;
  min_index = get_min_index_from_a(stack_a);
  if (min_is_up(stack_a, min_index))
    n_rotations = min_index;
  else
    n_rotations = (stack_a->curr_a) - min_index;
  if (n_rotations == stack_a->curr_a)
    n_rotations = 0;
  return (n_rotations);
}

int check_full_order(t_stack *stacks)
{
  int i;

  i = 0;
  while (i < stacks->curr_a - 1)
  {
    if (stacks->a[i] < stacks->a[i + 1])
      i++;
    else
      break;
  }
  return (i);
}

void  get_min_on_top_of_a_hardon_mode(t_stack *stack_a)
{
  int n_rotations;
  int min_index;
  
  n_rotations = 0;
  min_index = 0;
  n_rotations = get_n_rotations(stack_a); 
  while (n_rotations > 0)
  {
    min_index = get_min_index_from_a(stack_a
    );
    if (min_is_up(stack_a, min_index))
      ra(stack_a, 1);
    else
      rra(stack_a, 1);
    n_rotations--;
  }
}
 
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
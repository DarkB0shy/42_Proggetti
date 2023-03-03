#include "push_swap.h"

int get_min_index_from_a(t_stack *stack_a)
{
  int   i;
  int   min;

  i = 0;
  min = stack_a->a[i];
  while (i < stack_a->curr_a)
  {
    if (min > stack_a->a[i])
      min = stack_a->a[i];
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
  int   min_is_up;
  int   i;

  i = 0;
  min_is_up = 0;
  while (stack_a->a[i])
  {
    if (i == min_index)
    {
      min_is_up = 1;
      break;
    }
    if (i >= ((int)stack_a->curr_a)/2)
      break;
    i++;
  }
  return (min_is_up);
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
  if (!min_is_up(stack_a, min_index))
    n_rotations = (stack_a->curr_a) - min_index;
  if (min_index == 0)
    n_rotations = 0;
  if (min_index == stack_a->curr_a - 1)
    n_rotations = 1;
  return (n_rotations);
}

void get_min_on_top_of_a_ez_mode(t_stack *stack_a)
{
  int min_index;

  min_index = 0;
  min_index = get_min_index_from_a(stack_a);
  if (min_index == 1)
    sa(stack_a, 1);
  if (min_index == 0)
  {
    ;
  }
  if (min_index == (stack_a->curr_a) - 1)
    rra(stack_a, 1);
}

void  get_min_on_top_of_a_hardon(t_stack *stack_a)
{
  int n_rotations;
  int min_index;
  
  n_rotations = 0;
  min_index = 0;
  n_rotations = get_n_rotations(stack_a);
  while (n_rotations > 0)
  {
    min_index = get_min_index_from_a(stack_a);
    if (min_is_up(stack_a, min_index))
    {
      ra(stack_a, 1);
      n_rotations--;
    }
    else if (!min_is_up(stack_a, min_index))
    {
      rra(stack_a, 1);
      n_rotations--;
    }
  }
}

void longest_is(t_stack *stacks)
{
  int min_index;

  min_index = 0;
  min_index = get_min_index_from_a(stacks);
  while (stacks->curr_a > 0)
  {
    if (min_index == 0 || min_index == 1 || min_index == (stacks->curr_a) - 1)
      get_min_on_top_of_a_ez_mode(stacks);
    else
      get_min_on_top_of_a_hardon(stacks);
    pb(stacks, 1);
  }
  // if (stacks->curr_b % 2 == 0)
  //   sb(stacks, 1);
  print_arrayb(stacks, stacks->curr_b);
  // while (stacks->curr_b > 0)
  //   pa(stacks, 1);
  print_arraya(stacks, stacks->curr_a);
  ft_printf("%d\n", stacks->n_moves);
}

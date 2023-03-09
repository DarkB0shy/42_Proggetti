#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_stack {
	int	*a;
	int	*b;
	int	curr_a;
	int	curr_b;
	int	n_moves;
}				t_stack;

void	print_arraya(t_stack *stack, int len);
void	print_arrayb(t_stack *stack, int len);
int	ft_atoi(char *str);
int	pb(t_stack *stack, int f);
int	pa(t_stack *stack, int f);
int	ra(t_stack *stack, int f);
int	rra(t_stack *stack, int f);
int	sa(t_stack *stack, int f);
void  get_min_on_top_of_a_hardon_mode(t_stack *stack_a);
int check_full_order(t_stack *stacks);
int get_n_rotations(t_stack *stack_a);
int min_is_up(t_stack *stack_a, int min_index);
int get_min_index_from_a(t_stack *stack_a);
void longest_is(t_stack *stacks);

#endif
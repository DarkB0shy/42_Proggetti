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
void longest_is(t_stack *stacks);

#endif
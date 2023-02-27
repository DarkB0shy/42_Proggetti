#include "push_swap.h"

int *fill_stack(int ac, char **av)
{
    int *stack_a;
    int i;
    int j;

    stack_a = (int *)malloc(sizeof(int) * ac);
    if (!stack_a)
        return (0);
    i = 0;
    j = 1;
    while (av[j])
        stack_a[i++] = ft_atoi(av[j++]);
    return (stack_a);
}

int find_first(int *stack)
{
    return (stack[0]);
}

int find_last(int *stack)
{
    int i;

    i = 0;
    while (stack[i])
}

int main (int argc, char **argv)
{   
    int *stack_a;
    int *stack_b[argc - 1];
    int i;

    stack_a = fill_stack(argc, argv);
    return (0);
}

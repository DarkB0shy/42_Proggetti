#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(s1 + i) > *(char *)(s2 + i))
			return (1);
		else if (*(char *)(s1 + i) < *(char *)(s2 + i))
			return (-1);
		i = i + 1;
	}
	return (0);
}

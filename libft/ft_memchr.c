#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	if (!s)
		return(0);
	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) == (char)(c))
			return ((unsigned char *)(s + i));
		i = i + 1;
	}
	return (0);
}

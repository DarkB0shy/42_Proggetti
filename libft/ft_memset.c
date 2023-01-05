#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (i < n)
	{
		*(unsigned char *) (s + i) = (unsigned char) c;
		i = i + 1;
	}
	return (s);
}

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (i < n)
	{
		*(unsigned char *) (s + 1) = (unsigned char) c;
		i = i + 1;
	}
	return (s);
}

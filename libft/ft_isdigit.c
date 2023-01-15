#include "libft.h"

int	ft_isdigit(int c)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		if (c == i)
			return (1);
		i = i + 1;
	}
	return (0);
}

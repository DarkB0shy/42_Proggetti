#include "libft.h"

int	ft_isalpha(int c)
{
	int	a;

	a = 'a';
	while (a <= 'z')
	{
		if (a == c)
			return (1);
		a = a + 1;
	}
	return (0);
}

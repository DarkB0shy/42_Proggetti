#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c && !s[i + 1])
			return ((char*)(s + i));
		i = i + 1;
	}
	return (NULL);
}

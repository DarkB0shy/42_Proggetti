#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	if (n > (size_t)ft_strlen(s1))
		return (-1);
	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	while (s1[i] && i < n)
	{	
		if (s1[i] == s2[i])
			i = i + 1;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

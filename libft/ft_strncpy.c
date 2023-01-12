#include "libft.h"

char	*ft_strncpy(char *restrict dest, const char *restrict src, size_t n)
{
	size_t i;

	if (!src)
		return(dest);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return(dest);
}

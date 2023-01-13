#include "libft.h"

char	*ft_strncat(char *restrict dest, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	j;
	if (!src)
		return(dest);
	i = ft_strlen(dest);
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j = j + 1;
	}
	dest[i + j] = '\0';
	return(dest);
}

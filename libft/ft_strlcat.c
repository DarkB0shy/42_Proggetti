#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!src)
		return(n);
	i = ft_strlen(dest);
	j = ft_strlen(dest);
	if (n <= i)
		return(j + n);
	while (src[k] && i + k < (n - 1))
	{
		dest[i + k] = src[k];
		k = k + 1;
	}
	dest[i + k] = '\0';
	return(i + j);
}

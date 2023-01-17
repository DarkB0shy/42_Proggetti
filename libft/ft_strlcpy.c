#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	if (n != (size_t)ft_strlen(src))
		return (0);
	if (!dest || !src)
		return (0);
	i = 0;
	while (i < (n - 1))
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (n);
}

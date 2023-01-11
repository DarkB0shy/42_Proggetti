#include "libft.h"

char	*ft_strcpy(char *restrict dest, const char *src)
{
	int	i;

	if (!src)
		return(dest);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}

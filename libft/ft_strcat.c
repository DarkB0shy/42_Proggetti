#include "libft.h"

char	*ft_strcat(char *restrict dest, const char *restrict src)
{
	int	i;
	int	j;

	if (!src)
		return(dest);
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j = j + 1;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include "libft.h"

char	*ft_strcat(char *restrict dest, const char *restrict src)
{
	int	i;
	int	j;

	if (!src)
		return(dest);
	i = 0;
	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j = j + 1;
		i = i + 1;	
	}
	dest[i] = '\0';
	return(dest);
}

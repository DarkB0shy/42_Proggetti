#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	if (!needle)
		return((char*)haystack);
	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
			j = j + 1;
		if (needle[j] == '\0')
			return ((char*)&haystack[i]);
		i = i + 1;
		j = 0;
	}
	return (NULL);
}

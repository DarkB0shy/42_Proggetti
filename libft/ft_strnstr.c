#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (!needle)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (j < n)
			{
				j = j + 1;
				i = i + 1;
			}
			if (needle[j])
				return ((char *)haystack + (i - j));
			j = 0;
			i = i - 1;
		}
		i = i + 1;
	}
	return (NULL);
}
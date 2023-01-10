#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char temp[n];
	
	i = 0;
	if (!src)
		return (0);
	while (i < n)
	{
		*(unsigned char *)(temp + i) = *(unsigned char *)(src + i);
		i = i + 1;
	}
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(temp + i);
		i = i + 1;
	}
	return (dest);
}


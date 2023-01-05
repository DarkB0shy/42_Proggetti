#include "libft.h"

void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    size_t i;

    if (!src)
        return(0);
    i = 0;
    while (i < n)
    {
        *(unsigned char *) (dest + i) = *(unsigned char *) (src + i);
        i = i + 1;
    }
    return (dest);
}
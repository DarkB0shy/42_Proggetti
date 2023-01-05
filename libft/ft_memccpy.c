#include "libft.h"

void    *ft_memccpy(void *restrict dest, const void *restrict src, int c, site_t n)
{
    size_t i;

    if (!src)
        return(0);
    i = 0;
    while (i < n && *(unsigned char *)(src + i - 1) != (unsigned char) c)
    {
        
    }
}
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *buffer;
    char    *d;
    int sublen;
    int i;

    if (!s)
        return (NULL);
    sublen = (int)len - (int)start;
    buffer = (char *)malloc(sublen * sizeof(char) + 1);
    d = buffer;
    if (!d)
        return (NULL);
    i = 0;
    while (i < (int)len)
    {
        d[i] = s[start + i];
        i = i + 1;
    }
    d[i] = '\0';
    return (d);
}
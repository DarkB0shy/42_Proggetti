#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *buffer;
    char    *d;
    int i;

    buffer = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(char) + 1);
    d = buffer;
    if (!d)
        return (NULL);
    i = 0;
    while (i < ft_strlen(s1))
    {
        d[i] = s1[i];
        i = i + 1;
    }
    i = 0;
    while (i < ft_strlen(s2))
    {
        d[i + ft_strlen(s1)] = s2[i];
        i = i + 1;
    }
    d[i + ft_strlen(s1)] = '\0';
    return (d);
}
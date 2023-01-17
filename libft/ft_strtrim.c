#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *buffer;
    char    *d;
    int i;
    int j;

    if (!s1)
        return (NULL);
    buffer = (char *)malloc((ft_strlen(s1) - (2 * ft_strlen(set))) * sizeof(char) + 1);
    d = buffer;
    if (!d)
        return (NULL);
    i = ft_strlen(set);
    j = 0;
    while(j < (ft_strlen(s1) - 2 * ft_strlen(set)))
    {
        d[j] = s1[i];
        i = i + 1;
        j = j + 1;
    }
    d[j] = '\0';
    return (d);
}
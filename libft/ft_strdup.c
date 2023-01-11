#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	char	*str;
	char	*d;

	str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	d = str;
	if (!d)
		return(NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i = i + 1;
	}
	str[i] = '\0';
	return(str);
}

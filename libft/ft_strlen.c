#include "libft.h"

int ft_strlen(const char *str) {
	int i = 0;
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

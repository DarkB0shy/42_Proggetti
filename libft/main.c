#include "libft.h"
#include <stdio.h>
#include <string.h>

int main (void) {
	printf("ft_memset\n");
	char str[40] = "SuperMegaBanzai";
	ft_memset(str + 9, 4, 3*sizeof(char));
	printf("%s\n", str);
	char ptr[40] = "SuperMegaBanzai";
	memset(ptr + 9, 4, 3*sizeof(char));
	printf("%s\n", ptr);
	printf("ft_strlen\n");
	printf("%d\n", ft_strlen("ciao"));
	printf("\n");
}

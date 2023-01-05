#include "libft.h"
#include <stdio.h>
#include <strings.h>

int main (void) {

	/*ft_memset*/
	printf("ft_memset\n");
	char str[15] = "SuperMegaBanzai";
	ft_memset(str + 9, 4, 3*sizeof(char));
	printf("%s\n", str);

	/*ft_bzero*/
	printf("ft_bzero\n");
	char trs[10] = "BanzaiMega";
	ft_bzero(trs + 6, 3);
	printf("%s\n", trs);

	/*ft_strlen*/
	printf("ft_strlen\n");
	printf("%d\n", ft_strlen("ciao"));
	printf("\n");
}

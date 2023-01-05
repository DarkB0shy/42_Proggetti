#include "libft.h"
#include <stdio.h>
#include <string.h>

int main (void) {

	/*ft_memset*/
	printf("ft_memset\n");
	char str[15] = "SuperMegaBanzai";
	ft_memset(str + 9, 4, 3*sizeof(char));
	printf("%s\n", str);

	/*ft_bzero*/
	printf("ft_bzero\n");
	char srt[10] = "BanzaiMega";
	ft_bzero(srt + 6, 3);
	printf("%s\n", srt);

	/*ft_memcpy*/
	printf("ft_memcpy\n");
	char tsr[20] = "";
	char trs[20] = "Lar";
	ft_memcpy(tsr, trs, 3);
	printf("%s\n", tsr);

	/*ft_strlen*/
	printf("ft_strlen\n");
	printf("%d\n", ft_strlen("ciao"));

	return (0);
}

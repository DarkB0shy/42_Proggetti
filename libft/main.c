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

	/*ft_memccpy*/
	printf("ft_memccpy\n");
	char bat[20] = "Geronimo";
	char man[20] = "Stolton";
	ft_memccpy(bat, man, 'n', 7);
	printf("%s\n", bat);

	/*ft_memmove*/
	printf("ft_memmove\n");
	char rat[20] = "Babalu";
	char tat[20] = "Ayeaye";
	ft_memmove(rat, tat, 3);
	printf("%s\n", rat);
	
	/*ft_memchr*/
	printf("ft_memchr\n");
	printf("Originale\n");
	char cheng[20] = "Lumaca";
	memchr(cheng, 'a', 4);
	printf("%s\n", cheng);
	char chang[20] = "Lumaca";
	ft_memchr(chang, 'a', 4);
	printf("%s\n", chang);


	return (0);
}

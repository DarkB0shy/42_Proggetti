#include "libft.h"
#include <stdio.h>
#include <string.h>

int main (void) {

	printf("LIBFC functions\n");

	/*ft_isalpha*/
	printf("ft_isalpha\n");
	int jyr = 'a';
	printf("%d\n", ft_isalpha(jyr));

	/*ft_isdigit*/
	printf("ft_isdigit\n");
	int ryj = 7;
	printf("%d\n", ft_isdigit(ryj));

	/*ft_isalnum*/
	printf("ft_isalnum\n");
	int rjy = 9;
	printf("%d\n", ft_isalnum(rjy));

	/*ft_isascii*/
	printf("ft_isascii\n");
	int luke = '\n';
	printf("%d\n", ft_isascii(luke));

	/*ft_isprint*/
	printf("ft_isprint\n");
	int skyw = 'G';
	printf("%d\n", ft_isprint(skyw));

	/*ft_strlen*/
	printf("ft_strlen\n");
	char aya[] = "Hello";
	int kok = ft_strlen(aya);
	printf("%d\n", kok);

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

	/*ft_memmove*/
	printf("ft_memmove\n");
	char rat[20] = "Babalu";
	char tat[20] = "Ayeaye";
	ft_memmove(rat, tat, 3);
	printf("%s\n", rat);

	/*ft_strlcpy*/
	printf("ft_strlcpy\n");
	char molly[10] = "molly";
	char moon[10] = "moon";
	printf("%ld\n", ft_strlcpy(molly, moon, 4));

	/*ft_strlcat*/
	printf("ft_strlcat\n");
	char ff[20] = "ccc";
	char ii[20] = "uuu";
	printf("%ld\n", ft_strlcat(ff, ii, 3));

	/*ft_toupper*/
	printf("ft_toupper\n");
	int pow = 'g';
	int pepe = ft_toupper(pow);
	write(1, &pepe, 1);
	printf("\n");

	/*ft_tolower*/
	printf("ft_tolower\n");
	int pupu = ft_tolower(pepe);
	write(1, &pupu, 1);
	printf("\n");

	/*ft_strchr*/
	printf("ft_strchr\n");
	char baka[] = "Jerome";
	char bak = 'e';
	printf("%s\n", ft_strchr(baka, bak));

	/*ft_strrchr*/
	printf("ft_strrchr\n");
	char akab[] = "Jerome";
	char aka = 'e';
	printf("%s\n", ft_strrchr(akab, aka));

	/*ft_strncmp*/
	printf("ft_strncmp\n");
	char yugi[] = "qwerty";
	char oh[] = "abaco";
	printf("%d\n", ft_strncmp(yugi, oh, 1));
	
	/*ft_memchr*/
	printf("ft_memchr\n");
	char chang[20] = "Lumaca";
	char *old = ft_memchr(chang, 'a', 4);
	printf("%s\n", old);

	/*ft_memcmp*/
	printf("ft_memcmp\n");
	char cya[8] = "Gianfran";
	char ayc[8] = "Gianfran";
	int oko = 0;
	oko = ft_memcmp(cya, ayc, 5);
	printf("%d\n", oko);

	/*ft_strnstr*/
	printf("ft_strnstr\n");
	const char *jni = "Ballacanestro";
	const char *jn = "cane";
	char *yodel = ft_strnstr(jni, jn, 12);
	printf("%s\n", yodel);

	/*ft_atoi*/
	printf("ft_atoi\n");
	char *attoi = "\f	\t	\n-46b7";
	int iota = ft_atoi(attoi);
	printf("%d\n", iota);

	/*ft_strdup*/
	printf("ft_strdup\n");
	char *yaya = "Henlo";
	char *mewtwo;
	mewtwo = ft_strdup(yaya);
	printf("%s\n", mewtwo);

	/*ft_calloc*/

	printf("Additional functions\n");

	return (0);
}

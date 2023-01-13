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

	/*ft_strlen*/
	printf("ft_strlen\n");
	char aya[] = "Hello";
	int kok = ft_strlen(aya);
	printf("%d\n", kok);

	/*ft_strdup*/
	printf("ft_strdup\n");
	char *yaya = "Henlo";
	char *mewtwo;
	mewtwo = ft_strdup(yaya);
	printf("%s\n", mewtwo);

	/*ft_strcpy*/
	printf("ft_strcpy\n");
	char ciccia[5] = "ciao";
	char cacca[5] = "zi";
	char *cicciacacca = ft_strcpy(ciccia, cacca);
	printf("%s\n", cicciacacca);	

	/*ft_strncpy*/
	printf("ft_strncpy\n");
	char jjj[7] = "Buonase";
	char zzz[7] = "Ando";
	char *xxx = ft_strncpy(jjj, zzz, 3);
	printf("%s\n", xxx);

	/*ft_strcat*/
	printf("ft_strcat\n");
	char aa[20] = "aaa";
	char bb[20] = "iii";
	char *cc = ft_strcat(aa, bb);
	printf("%s\n", cc);

	/*ft_strncat*/
	printf("ft_strncat\n");
	char dd[20] = "bbb";
	char ee[20] = "ooo";
	char *bf = ft_strncat(dd, ee, 1);
	printf("%s\n", bf);

	/*ft_strlcat*/
	printf("ft_strlcat\n");
	char ff[20] = "ccc";
	char ii[20] = "uuu";
	printf("%ld\n", ft_strlcat(ff, ii, 3));

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

	/*ft_strstr*/
	printf("ft_strstr\n");
	char achab[] = "HappyMeal";
	char isma[] = "Happy";
	printf("%s\n", strstr(achab, isma));
	printf("%s\n", ft_strstr(achab, isma));


	/*ft_atoi*/
	printf("ft_atoi\n");
	char *attoi = "\f	\t	\n-46b7";
	int iota = ft_atoi(attoi);
	printf("%d\n", iota);

	return (0);
}

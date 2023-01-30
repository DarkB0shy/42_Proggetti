#include "get_next_line.h"

int	main (void)
{
	int	fd=open	("FILE_DI_TESTO.txt", O_RDONLY);
	char	*daje=get_next_line	(fd);
	printf("%s\n", daje);
	fd=close	(fd);
	return	(0);
}

#include "get_next_line.h"

int	main (void)
{
	int	fd=open	("FILE_DI_TESTO.txt", O_RDONLY);
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	fd=close	(fd);
	return	(0);
}

#include "get_next_line.h"

int	main (void)
{
	FILE *fd;
	char str[BUFFER_SIZE];
	int gucci;

	fd = fopen("linkz.txt", "r");
	if (fd == NULL)
	{
		printf("Errrore apertura file\n");
		return (-1);
	}
	else
	{
		gucci = read(fd, str, BUFFER_SIZE);
		if (gucci != -1)
			printf("%s\n", str);
		else
		{
			printf("Errrore lettura file\n");
			return (-2);
		}
	}
	fclose(fd);
	return (0);
}

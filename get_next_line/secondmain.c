#include "get_next_line.h"

int	main (void)
{
	int	fd;
	int	groucho;
	char	*ret;

	fd = open("linkz.txt", O_RDONLY);
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		printf("Rest in pieces\n");
		return (-1);
	}
	printf("%s\n", get_next_line(fd));
	close (fd);
	return (0);
}

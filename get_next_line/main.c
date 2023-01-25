#include "get_next_line.h"
#include <fcntl.h>
#include <string.h>


int	main (void)
{
	// printf("%s \n", ft_strjoin(NULL, "ciao mammma"));
	int fd;
	static char *line;
	char	*buffer;
	int gucci;
	char	*tmp;
	int i = 0;

	fd = open("linkz.txt", O_RDONLY);

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		printf("Errrore apertura file\n");
		return (-1);
	}
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	gucci = 1;
	while (!(ft_strchr(line, '\n')) && gucci >= 0)
	{
		gucci = read(fd, buffer, BUFFER_SIZE);
		printf("%d \n", gucci);
		if (gucci == -1)
		{
			printf("E'andato tutto a troie\n");
			return(-1);
		}
		line = ft_strjoin(line, buffer);
		i++;
	}
	free(buffer);
	while (line[i] != '\n')
		i++;
	tmp = malloc((i + 1) * sizeof(char));
	i = 0;
	while (line[i] != '\n' && line)
	{
		tmp[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		tmp[i] = '\n';
		i++;
	}
	tmp[i] = 0;
	printf("%s \n",tmp);




	// // else
	// // {
	// // 	gucci = read(fd, str, BUFFER_SIZE);
	// // 	if (gucci == -1)
	// // 		{
	// // 			printf("Errrore lettura file\n");
	// // 			return (-2);
	// // 		}
	// // 	// while (!(strchr(str, '\n')) && *str)
	// // 	// {
	// // 	// 	printf("%c \n", str[gucci]);
	// // 	// }
	// // }
	// // if (gucci != -1)
	// // 	printf("%s\n", str);
	close(fd);
	return (0);
}

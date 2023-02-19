#include "get_next_line.h"

char	*get_line_from_fd(int fd, char *line)
{
	int	bytes_read;
	char	*buffer;


	buffer=(char*)malloc(sizeof(char)*(BUFFER_SIZE+1));
	if(!buffer)
		return	(NULL);

	bytes_read=1;
	while	(!check_for_backslash_n(line) && bytes_read > 0)
	{
		bytes_read=read(fd, buffer, BUFFER_SIZE);
		if(bytes_read == -1)
		{
			free	(buffer);
			return	(NULL);
		}
		buffer[bytes_read]='\0';
		line=add_buffer_to_line(line, buffer);
	}
	free	(buffer);
	return	(line);
}

char	*discard_after_backslash_n(char *str)
{
	char	*ret;
	int	i;

	i=0;
	if(!str[i])
		return	(NULL);
	while	(str[i]!='\n' && str[i])
		i++;
	ret=(char*)malloc(i+2);
	if(ret==NULL)
		return	(NULL);
	i=0;
	while	(str[i]!='\n' && str[i])
	{
		ret[i]=str[i];
		i++;
	}
	if(str[i]=='\n')
	{
		ret[i]=str[i];
		i++;
	}
	ret[i]='\0';
	return	(ret);
}

char	*clean_next_next_line(char *str)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	while	(str[i]!='\n' && str[i])
		i++;
	if(!str[i])
	{
		free	(str);
		return	(NULL);
	}
	ret=(char*)malloc(sizeof(char)*(ft_strlen(str) - i + 1));
	if(ret == NULL)
		return	(NULL);
	j=0;
	i++;
	while	(str[i]!='\0')
	{
		ret[j]=str[i];
		i++;
		j++;
	}
	ret[i]='\0';
	return	(ret);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return	(NULL);
	line=NULL;
	line=get_line_from_fd(fd, line);
	if(!line)
		return	(NULL);
	next_line=discard_after_backslash_n(line);
	line=clean_next_next_line(line);
	return	(next_line);
}

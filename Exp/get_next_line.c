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
		else
		{
			buffer[bytes_read]='\0';
			line=add_buffer_to_line(line, buffer);
		}
	}
	free	(buffer);
	return	(line);
}

char	*discard_after_backslash_n(char *str)
{
	char	*ret;
	int	i;

	if(!str)
		return	(NULL);
	i=0;
	while	(str[i]!='\n' && str[i])
		i++;
	ret=(char*)malloc(sizeof(char)*(i+2));
	if(!ret)
		return	(NULL);
	i=0;
	while	(str[i]!='\n' && str[i])
	{
		ret[i]=str[i];
		i++;
	}
	if(str[i]=='\n')
	{
		ret[i]='\n';
		i++;
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
	line=get_line_from_fd(fd, line);
	if(!line)
		return	(NULL);
	next_line=discard_after_backslash_n(line);
	return	(next_line);
}


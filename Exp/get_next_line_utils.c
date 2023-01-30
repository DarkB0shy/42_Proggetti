#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i=0;
	while	(str[i])
		i++;
	return	(i);
}

char	*check_for_backslash_n(char *str)
{
	int	i;
	
	i=0;
	if(!str)
		return	(0);
	while	(str[i] != '\0')
	{
		if(str[i] == '\n')
			return	((char*)&str[i]);
		i++;
	}
	return	(0);
}

char	*add_buffer_to_line(char *str1, char *str2)
{
	int	i;
	int	w_length;
	char	*ret_str;

	if(!str1)
	{
		str1=(char*)malloc(sizeof(char)*1);
		str1[0]='\0';
	}
	if (!str1 || !str2)
		return	(NULL);
	w_length=ft_strlen(str1)+ft_strlen(str2)+1;
	ret_str=(char*)malloc(sizeof(char)*w_length);
	if(!ret_str)
		return	(NULL);
	if(str1)
	{
		while	(str1[i] != '\0')
		{
			ret_str[i]=str1[i];
			i++;
		}
	}
	i=0;
	while	(str2[i] != '\0')
	{
		ret_str[i+ft_strlen(str1)]=str2[i];
		i++;
	}
	ret_str[w_length]='\0';
	free(str1);
	return	(ret_str);
}

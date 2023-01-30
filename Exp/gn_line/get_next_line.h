#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*get_line_from_fd(int fd, char *line);
int		ft_strlen(char *str);
char	*check_for_backslash_n(char *str);
char	*add_buffer_to_line(char *src, char *dest);
char	*discard_after_backslash_n(char *str);
char	*clean_next_next_line(char *str);

#endif

#include <unistd.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void    *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *restrict dest, const char *src);
char	*ft_strncpy(char *restrict dest, const char *restrict src, size_t n);
char	*ft_strcat(char *restrict dest, const char *restrict src);
char	*ft_strncat(char *restrict dest, const char *restrict src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
int	ft_atoi(const char *nptr);


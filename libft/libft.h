#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void    *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

int	ft_strlen(char *str);

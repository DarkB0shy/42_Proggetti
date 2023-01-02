#include "libft.h"
#include <unistd.h>

int main (int argc, char **argv) {
	if (argc == 1)
		write(1, "\n", 1);
	else {
		int i = ft_strlen(argv[1]);
		i = i + 48;
		write (1, &i, 1);
		ft_tolower(argv[1]);
		i = 0;
		while (argv[1][i] != '\0') {
			write(1, &argv[1][i], 1);
			i = i + 1;
		}	
	}
}

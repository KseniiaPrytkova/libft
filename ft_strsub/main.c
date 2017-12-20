#include "libft.h"

int		main(void)
{
	char strsub13[] = "z\0";
	// printf("%s\n", &strsub13[1]);
	// printf("%s\n", ft_strsub(strsub13, 1, 1));
	// printf("%i\n", strcmp(ft_strsub(strsub13, 1, 1), &strsub13[1]));
	printf("%i\n", ft_strsub(strsub13, 1, 220) == 0);
	return (0);
}
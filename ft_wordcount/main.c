#include "libft.h"

int		main(void)
{
	char *s = "**some*students***horse*****dog*potato*";
	char c = '*';
	printf("%zu\n", ft_wordcount(s, c));
	
	return (0);
}
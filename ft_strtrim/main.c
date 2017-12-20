#include "libft.h"

int		main(void)
{
	char *s = "  \t \t \n   \n\n\n\t  ";
	printf("%s\n", ft_strtrim(s));
	return (0);
}
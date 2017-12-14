#include "libft.h"

int		main(void)
{
	char *s = "kakapusa";
	int start = 3;
	int len = 5;

	printf("%s\n", ft_strsub(s, start, len));
	return (0);
}
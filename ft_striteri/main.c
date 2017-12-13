#include "libft.h"

void	my_fn(unsigned int n, char *s)
{
	*s = '0' + n;
}

int		main(void)
{
	char array[10] = "abcdefghj";
	int nb = 4;
	ft_striteri(array, &my_fn);
	printf("%s\n", array);
	return (0);
}
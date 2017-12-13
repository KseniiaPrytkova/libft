#include "libft.h"

char	my_fn(unsigned int n, char character)
{
	character = '0' + n;
	return (character);
}

int		main(void)
{
	char *s = "kaka";
	
	printf("%s\n", ft_strmapi(s, &my_fn));

	return (0);
}
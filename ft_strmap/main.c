#include "libft.h"

char	my_fn(char character)
{
	character = character + 1;
	return (character);
}

int		main(void)
{
	char *s = "kaka";
	
	printf("%s\n", ft_strmap(s, &my_fn));

	return (0);
}
#include "libft.h"

void ft_putendl(char const *s)
{
	size_t len;

	if (s != NULL)
	{
		len = ft_strlen(s);
		write (1, s, len);
		write (1, "\n", 1);
	}

}
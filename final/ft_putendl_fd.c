#include "libft.h"

void ft_putendl(char const *s)
{
	size_t len;

	if (s != NULL)
	{
		len = ft_strlen(s);
		if (len > 0)
		{
			write (fd, s, len);
		}
		write (fd, "\n", 1);
	}

}
#include "libft.h"

void ft_putendl_fd(char const *s, int fd)
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
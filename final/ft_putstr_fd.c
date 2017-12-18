#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t len;

	if (s == NULL)
		return ;

	len = ft_strlen(s);
	if (len > 0)
	{
		write(fd, s, len);
	}
}
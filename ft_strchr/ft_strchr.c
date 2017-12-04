#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char c_transform = (char)c;

	while (*s != '\0')
	{
		if (*s == c_transform)
		{
			return ((char *)s);
		}

		s++;
	}
	if (c_transform == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
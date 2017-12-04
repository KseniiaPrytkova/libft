#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *s_helper;
	char c_transform = (char)c;

	s_helper = NULL;
	while (*s != '\0')
	{
		if (*s == c_transform)
		{
			s_helper = (char *)s; 
		}
		s++;
	}
	if (c_transform == '\0')
	{
		return ((char *)s);
	}
	return (s_helper);
}
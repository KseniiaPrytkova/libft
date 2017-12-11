#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t counter;

	counter = 0;
	while (counter < n && (*s1 - *s2) == 0)
	{
		s1++;
		s2++;
		counter++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	char *s_final;
	size_t counter;

	s_final = s1;
	counter = 0;

	while (*s1 != '\0')
	{
		s1++;
	}
	while (counter < n && (*s2 != '\0'))
	{
		*s1 = *s2;
		s1++;
		s2++;
		counter++;
	}
	*s1 = '\0';
	return (s_final);
}
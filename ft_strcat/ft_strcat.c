#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
	char	*s_final;

	s_final = s1;
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (s_final);
}
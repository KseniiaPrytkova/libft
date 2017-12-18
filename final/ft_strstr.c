#include "libft.h"

int		ft_substrcmp(const char *s1, const char *s2, size_t n)
{
	size_t counter;

	counter = 0;
	while (counter < n && (*s1 - *s2) == 0)
	{
		s1++;
		s2++;
		counter++;
	}
	return (counter == n);
}


char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t smallstr_len;

	smallstr_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		if (ft_substrcmp(haystack, needle, smallstr_len) == 1)
			return ((char *)haystack);

		haystack++;
	}
	return (NULL);
}
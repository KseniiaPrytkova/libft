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

char 	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t smallstr_len;
	size_t counter;
	size_t finish;

	smallstr_len = ft_strlen(needle);
	
	finish = len - smallstr_len;
	if (finish <= 0)
		return (NULL);

	counter = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	
	while (counter <= finish)
	{

		if (ft_substrcmp(haystack, needle, smallstr_len) == 1)
			return ((char *)haystack);

		haystack++;
		counter++;
	}
	return (NULL);
}
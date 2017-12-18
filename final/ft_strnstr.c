#include "libft.h"

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
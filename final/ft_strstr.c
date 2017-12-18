#include "libft.h"

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
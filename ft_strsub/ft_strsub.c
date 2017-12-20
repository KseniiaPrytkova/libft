#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	untouched_length;
	size_t	string_len;

	substring = NULL;
	untouched_length = 0;
	if (s)
		string_len = ft_strlen(s);
	if (s && start < string_len + 1 && len < string_len)
	{
		untouched_length = len;
		if ((substring = malloc(sizeof(char) * len + 1)) == NULL)
			return (NULL);
		s = s + start;
		while (len-- > 0)
		{
			*substring = *s;
			substring++;
			s++;
		}
		*substring = '\0';
	}
	return (substring - untouched_length);
}
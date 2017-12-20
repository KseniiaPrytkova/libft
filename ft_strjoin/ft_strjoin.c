#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result_string;

	s1_len = 0;
	s2_len = 0;
	result_string = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
		if (!strcmp(s1, s2))
			return (NULL);
		result_string = ft_strnew(s1_len + s2_len + 1);
		if (result_string)
		{
			ft_strncpy(result_string, s1, s1_len);
			ft_strncpy((result_string + s1_len), s2, s2_len);
		}
		else
			return (NULL);
	}
	return (result_string);
}
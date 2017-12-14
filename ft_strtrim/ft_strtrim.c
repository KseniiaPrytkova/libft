#include "libft.h"

char	* ft_strtrim(char const *s)
{
	char *fresh_string;
	size_t first_letter;
	size_t last_letter;
	size_t str_len;
	char *str_end;

	fresh_string = NULL;
	first_letter = 0;
	last_letter = 0;
	if (s != NULL)
	{
		str_len = ft_strlen(s);
		str_end = (char *)s + (str_len - 1);
		while (*s == ' ' || *s == '\n' || *s == '\t')
		{
			s++;
			first_letter++;
		}
	
		while (*str_end == ' ' || *str_end == '\n' || *str_end == '\t')
		{
			str_end--;
			last_letter++;
		}

		str_len = str_len - (first_letter + last_letter);
		
		if ((fresh_string = malloc(sizeof(char) * str_len + 1)) == NULL)
			return (NULL);

		ft_strncpy(fresh_string, s, str_len);
		*(fresh_string + str_len) = '\0';
	}
	return (fresh_string);
}
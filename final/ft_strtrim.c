#include "libft.h"

size_t		where_1st_lett_is(const char *s)
{
	size_t counter;
	counter = 0;

	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		s++;
		counter++;
	}

	return (counter);
}

size_t		where_last_lett_is(char *s)
{
	size_t counter;

	counter = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		s--;
		counter++;
	}

	return (counter);
}

char		* ft_strtrim(char const *s)
{
	char *fresh_string;
	size_t first_letter;
	size_t last_letter;
	size_t str_len;
	char *str_end;

	fresh_string = NULL;

	if (s != NULL)
	{
		str_len = ft_strlen(s);
		str_end = (char *)s + (str_len - 1);
		first_letter = where_1st_lett_is(s);
		last_letter = where_last_lett_is(str_end);
		
		if (str_len == last_letter && first_letter && first_letter == str_len)
			str_len = 0;
		else 
			str_len = str_len - (first_letter + last_letter);

		if ((fresh_string = malloc(sizeof(char) * str_len + 1)) == NULL)
			return (NULL);

		ft_strncpy(fresh_string, (s + first_letter), str_len);
		*(fresh_string + str_len) = '\0';
	}
	return (fresh_string);
}
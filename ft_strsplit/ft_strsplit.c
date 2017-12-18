#include "libft.h"

size_t len_of_word(char *s, char c)
{
	size_t counter;

	counter = 0;
	while (*s != '\0' && *s != c)
	{

		counter++;
		s++;
	}
	
	return (counter);
}

size_t copy(char *dst, char *src, size_t len)
{
	ft_strncpy(dst, (char *)src, len);
	return (len);
}

char	** ft_strsplit(char const *s, char c)
{
	char **storage;
	size_t stor_size;
	size_t one_word_len;

	storage = NULL;
    if (s)
    {	
    	stor_size = ft_wordcount(s, c);
		if (!(storage = malloc(sizeof(char *) * stor_size + 1)))
			return (NULL);
		while (*s != '\0')
		{
			if (*s != c)
			{
				one_word_len = len_of_word((char *)s, c);
				if (!(*storage = ft_strnew(one_word_len + 1)))
					return (NULL);
				s = s + copy(*storage, (char *)s, one_word_len) - 1;
				storage++;
			} 
			s++;
		}
		*storage = NULL;
		storage = storage - stor_size;
	}
	return (storage);
}
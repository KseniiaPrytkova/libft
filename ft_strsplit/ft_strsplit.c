#include "libft.h"

size_t		how_much_words(char const *s, char c)
{
	size_t counter;

	counter = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			if (*(s + 1) == c)
				counter++;
		}
		s++;
	}
	if (*(s - 1) != c)
		counter++;
	return (counter);
}

size_t len_of_word(char *s, char c)
{
	size_t counter;

	counter = 0;
	while (*s != c)
	{

		counter++;
		s++;
	}
	
	return (counter);
}


char	** ft_strsplit(char const *s, char c)
{
	char **final_storage;
	size_t storage_size;
	size_t one_word_len;
	char *word;
    
	storage_size = how_much_words(s, c);
	final_storage = malloc(sizeof(char *) * storage_size);
	while (*s != '\0')
	{
		if (*s != c)
		{
			one_word_len = len_of_word((char *)s, c);
			word = malloc(sizeof(char) * one_word_len + 1);

			ft_strncpy(word, (char *)s, one_word_len);
			word = word + one_word_len;
            *final_storage = word - one_word_len;
            final_storage++;
			s = s + one_word_len;
		} else {
			s++;
		}
	}

	return (final_storage - storage_size);
}
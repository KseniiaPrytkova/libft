#include "libft.h"

size_t		ft_count(char const *s)
{
	size_t counter;

	counter = 0;
	if (s && s != '\0')
	{
		while (*s != '\0')
		{
			if (*s != '\n' && *s != ' ' && *s != '\t')
			{
				if (*(s + 1) == '\n' || *(s + 1) == ' ' || *(s + 1) == '\t')
				counter++;
			}
			s++;
		}
		if (*(s - 1) != '\n' && *(s - 1) != ' ' && *(s - 1) != '\t')
			counter++;
	}
	return (counter);
}

size_t		ft_wordcount(char const *s, char c)
{
	size_t counter;

	counter = 0;
	if (!c)
	{
		return (ft_count(s));
	}

	if (s && s != '\0')
	{
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
	}
	return (counter);
}


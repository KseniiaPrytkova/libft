#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int counter;
	
	if (s != NULL && f != NULL)
	{
		counter = 0;
		while (*s != '\0')
		{
			f(counter, s);
			s++;
			counter++;
		}
	}
}
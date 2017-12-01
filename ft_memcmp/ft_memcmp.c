#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			counter;
	unsigned char	*string1;
	unsigned char	*string2;

	counter = 0;
	string1 = (unsigned char*)s1;
	string2 = (unsigned char*)s2;

	while (counter < n)
	{
		if (*string1 != *string2)
		{
			return (*string1 - *string2);
		}

		string1++;
		string2++;
		counter++;
	}
	return (0); 
}
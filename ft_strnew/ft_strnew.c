#include "libft.h"

char	* ft_strnew(size_t size)
{
	char *place;
	size++;
	place = malloc(size);
	if (place == NULL)
		return (NULL);
	ft_memset(place, '\0', size);
	return (place);
}
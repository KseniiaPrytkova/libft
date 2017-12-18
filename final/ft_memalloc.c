#include "libft.h"

void	* ft_memalloc(size_t size)
{
	void *place;
	
	place = malloc(size);
	if (place == NULL)
		return NULL;
	ft_bzero(place, size);
	return (place);
}
#include "libft.h"

void 	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned	char *dst_tail;
	unsigned	char *source;
	unsigned	char *destination;

	int counter = (int)len - 1;
	source = (unsigned char*)src;
	destination = (unsigned char*)dst;


	if (source < destination)
	{
		while (counter >= 0)
		{
			*(destination + counter) = *(source + counter);
			counter--;
		}
		return (dst);
	}
	else if (source > destination)
	{
		while (counter > 0)
		{
			*destination = *source;
			destination++;
			source++;
			counter--;
		}
		return (dst);
	}
	else
		return (dst);
}
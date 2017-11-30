#include "libft.h"

 void *ft_memchr(const void *s, int c, size_t n)
 {
 	size_t counter;
 	unsigned char *pointer;

 	pointer = (unsigned char *)s;
 	counter = 0;
 	while (counter < n)
 	{
 		if (*pointer == (unsigned char)c)
 			return (pointer);
 		pointer++;
 		counter++;
 	}
 	return (NULL);
 }
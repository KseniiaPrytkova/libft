#include "libft.h"

int		main(void)
{
	char some[] = "12345678";
	char *src;
	char *dst;	
	size_t len = 5;

	src = some + 3;
	dst = some;

	printf("%s\n", src);
	ft_memmove(dst, src, len);
	printf("%s\n", src);
	printf("%s\n", dst);
		
	return 0;
}
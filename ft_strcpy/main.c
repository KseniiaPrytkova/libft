#include "libft.h"

int		main(void)
{
	char dst[9];
	char *holder_std;
	char *holder_my;

	holder_std = strcpy(dst, "1231231234");
	printf("I'm standart: %s\n", holder_std);

	holder_my = ft_strcpy(dst, "1231231234");
	printf("I'm your's:   %s\n",holder_my);
	return(0);
}
#include "libft.h"

int		main(void)
{
		/*___TEST_CASE_1___*/
	size_t size = 5;
	char *place;
	place = ft_memalloc(size);

	ft_memset(place, 'q', size);
	printf("TEST_CASE_1:\n");
	printf("%s\n", place);

	ft_strdel(&place);
	printf("%s\n", place);

	return (0);
}
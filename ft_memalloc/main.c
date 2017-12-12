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

	/*___TEST_CASE_2___*/
	size_t size_2 = -5;
	char *place_2;
	place_2 = ft_memalloc(size_2);
	if (place_2 != NULL)
	{
		ft_memset(place_2, 'q', size_2);
	}
	printf("TEST_CASE_2:\n");
	printf("%s\n", place_2);

	return (0);
}
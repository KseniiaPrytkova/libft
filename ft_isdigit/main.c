#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	char c = '5';
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %i\n", isdigit(c));

	printf("I'm your's:   %i\n", ft_isdigit(c));

	/*___TEST_CASE_2___*/
	char c_2 = 3;
	printf("TEST_CASE_2:\n");
	printf("I'm standart: %i\n", isdigit(c_2));

	printf("I'm your's:   %i\n", ft_isdigit(c_2));
	return (0);
}
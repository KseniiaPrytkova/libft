#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	char c = '5';
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %i\n", isalnum(c));

	printf("I'm your's:   %i\n", ft_isalnum(c));

	/*___TEST_CASE_2___*/
	char c_2 = 7;
	printf("TEST_CASE_2:\n");
	printf("I'm standart: %i\n", isalnum(c_2));

	printf("I'm your's:   %i\n", ft_isalnum(c_2));
	return (0);
}
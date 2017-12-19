#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	char c = EOF;
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %i\n", isalpha(c));

	printf("I'm your's:   %i\n", ft_isalpha(c));

	/*___TEST_CASE_2___*/
	char c_2 = 5;
	printf("TEST_CASE_2:\n");
	printf("I'm standart: %i\n", isalpha(c_2));

	printf("I'm your's:   %i\n", ft_isalpha(c_2));
	return (0);
}
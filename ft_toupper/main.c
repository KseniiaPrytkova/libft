#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	char c = 'q';
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %i\n", toupper(c));

	printf("I'm your's:   %i\n", ft_toupper(c));

	/*___TEST_CASE_2___*/
	char c_2 = ' ';
	printf("TEST_CASE_2:\n");
	printf("I'm standart: %i\n", toupper(c_2));

	printf("I'm your's:   %i\n", ft_toupper(c_2));
	return (0);
}
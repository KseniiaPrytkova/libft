#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	
	char *s1_1 = "kaka";
	char *s2_1 = "kaka";
	printf("TEST_CASE_1:\n");
	printf("%i\n", ft_strequ(s1_1, s2_1));

	/*___TEST_CASE_2___*/
	char *s1_2 = NULL;
	char *s2_2 = NULL;
	printf("TEST_CASE_2:\n");
	printf("%i\n", ft_strequ(s1_2, s2_2));

	/*___TEST_CASE_3___*/
	char *s1_3 = NULL;
	char *s2_3 = "kaka";
	printf("TEST_CASE_3:\n");
	printf("%i\n", ft_strequ(s1_3, s2_3));

	/*___TEST_CASE_4___*/
	char *s1_4;
	char *s2_4 = "kaka";
	printf("TEST_CASE_4:\n");
	printf("%i\n", ft_strequ(s1_4, s2_4));
	return (0);
}
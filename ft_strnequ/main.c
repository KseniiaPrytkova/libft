#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	
	char *s1_1 = "kaka";
	char *s2_1 = "kaka";
	int n_1 = 3;
	printf("TEST_CASE_1:\n");
	printf("%i\n", ft_strnequ(s1_1, s2_1, n_1));

	/*___TEST_CASE_2___*/
	char *s1_2 = NULL;
	char *s2_2 = NULL;
	int n_2 = 3;
	printf("TEST_CASE_2:\n");
	printf("%i\n", ft_strnequ(s1_2, s2_2, n_2));

	/*___TEST_CASE_3___*/
	char *s1_3 = NULL;
	char *s2_3 = "kaka";
	int n_3 = 3;
	printf("TEST_CASE_3:\n");
	printf("%i\n", ft_strnequ(s1_3, s2_3, n_3));

	/*___TEST_CASE_4___*/
	char *s1_4 = "santa";
	char *s2_4 = "kaka";
	printf("TEST_CASE_4:\n");
	int n_4 = 3;
	printf("%i\n", ft_strnequ(s1_4, s2_4, n_4));

	/*___TEST_CASE_4___*/
	char *s1_5 = "santa";
	char *s2_5 = "kaka";
	printf("TEST_CASE_5:\n");
	int n_5 = -5;
	printf("%i\n", ft_strnequ(s1_5, s2_5, n_5));
	return (0);
}
#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	int n_1 = -111;

	char *result_1 = ft_itoa(n_1);
	printf("TEST_CASE_1:\n");
	printf("%s\n", result_1);

	/*___TEST_CASE_2___*/
	int n_2 = 0;

	char *result_2 = ft_itoa(n_2);
	printf("TEST_CASE_2:\n");
	printf("%s\n", result_2);

	/*___TEST_CASE_3___*/
	int n_3 = 123456789;

	char *result_3 = ft_itoa(n_3);
	printf("TEST_CASE_3:\n");
	printf("%s\n", result_3);

	return (0);
}
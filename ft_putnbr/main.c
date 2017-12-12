#include "libft.h"

int		main(void)
{


	/*___TEST_CASE_1___*/
	int n_1 = 21475;
	printf("TEST_CASE_1:\n");
	printf("printf nb:\n%i\n", n_1);
	ft_putnbr(n_1);
	printf("\n");
	/*___TEST_CASE_2___*/
	int n_2 = -214;
	printf("TEST_CASE_2:\n");
	printf("printf nb:\n%i\n", n_2);
	ft_putnbr(n_2);
	printf("\n");
	/*___TEST_CASE_3___*/
	long n_3 = 2147483647;
	printf("TEST_CASE_3:\n");
	printf("printf nb:\n%li\n", n_3);
	ft_putnbr(n_3);
	printf("\n");

	return (0);
}

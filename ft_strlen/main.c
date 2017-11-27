#include "libft.h"

int		main(void)
{
	char test_standart[] = "kakaka";
	char test_my[] = "kakaka";

	/*___TEST_CASE_1___*/
	size_t a = strlen(test_standart);
	size_t b = ft_strlen(test_my);
	printf("TEST_CASE_1:\n");
	printf("%zu\n", a);
	printf("%zu\n", b);

	// ___TEST_CASE_2___
	char test_nothing_standart[] = "";
	char test_nothing_my[] = "";

	size_t c = strlen(test_nothing_standart);
	size_t d = ft_strlen(test_nothing_my);
	printf("TEST_CASE_2:\n");
	printf("%zu\n", c);
	printf("%zu\n", d);

	/*___TEST_CASE_3___*/
	// char *test_null_standart = NULL;
	char *test_null_my = NULL;

	// size_t e = ft_strlen(test_null_standart);
	size_t f = strlen(test_null_my);
	printf("TEST_CASE_3:\n");
	// printf("%zu\n", e);
	printf("%zu\n", f);

	return(0);
}
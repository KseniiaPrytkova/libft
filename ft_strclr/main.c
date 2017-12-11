#include "libft.h"

int 	main(void)
{
	/*___TEST_CASE_1___*/
	char s[5] = "kaka";
	// char s_2[5] = {'k', 'a', 'NULL', 'a', '\0'};
	ft_strclr(s);
	printf("TEST_CASE_1:\n");
	printf("%s\n", s);

	/*___TEST_CASE_2___*/
	char s_case_2[5] = {'k', 'a', 'N', 'a', '\0'};
	ft_strclr(s_case_2);
	printf("TEST_CASE_2:\n");
	printf("%s\n", s_case_2);
	return (0);
}
#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	char s1[] = "kaka";
	char *s2;

	s2 = strdup(s1);
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %s\n", s2);

	s2 = ft_strdup(s1);
	printf("I'm your's:   %s\n", s2);

	return (0);
}
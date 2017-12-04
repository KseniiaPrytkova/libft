#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	const char *s_std = "abcdefdgd";
	int c_std = 'd';
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %s\n", strchr(s_std, c_std));
	/*----------------------------------------------------------------------*/
	const char *s_my = "abcdefdgd";
	int c_my = 'd';
	printf("I'm your's:   %s\n", ft_strchr(s_my, c_my));

	/*___TEST_CASE_2___*/
	const char *s2_std = "abcdefdgd";
	int c2_std = ' ';
	printf("TEST_CASE_2:\n");
	printf("I'm standart: %s\n", strchr(s2_std, c2_std));
	/*----------------------------------------------------------------------*/
	const char *s2_my = "abcdefdgd";
	int c2_my = ' ';
	printf("I'm your's:   %s\n", ft_strchr(s2_my, c2_my));
	return (0);
}
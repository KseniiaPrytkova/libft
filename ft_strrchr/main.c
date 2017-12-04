#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	const char *s_std = "aDcqDqt";
	int c_std = 'D';
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %s\n", strrchr(s_std, c_std));
	/*----------------------------------------------------------------------*/
	const char *s_my = "aDcqDqt";
	int c_my = 'D';
	printf("I'm your's:   %s\n", ft_strrchr(s_my, c_my));

	/*___TEST_CASE_2___*/
	const char *s2_std = "abcdefdgd";
	int c2_std = '\0';
	printf("TEST_CASE_2:\n");
	printf("I'm standart: %s\n", strrchr(s2_std, c2_std));
	/*----------------------------------------------------------------------*/
	const char *s2_my = "abcdefdgd";
	int c2_my = '\0';
	printf("I'm your's:   %s\n", ft_strrchr(s2_my, c2_my));
	return (0);
}
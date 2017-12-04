#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	const char *s1_std = "ABChrt";
	const char *s2_std = "ABCqwe";
	int n_std = 4;
	int res_std;

	printf("TEST_CASE_1:\n");
	res_std = strncmp(s1_std, s2_std, n_std);
	printf("I'm standart: %i\n", res_std);
	/*----------------------------------------------------------------------*/
	const char *s1_my = "ABChrt";
	const char *s2_my = "ABCqwe";
	int n_my = 4;
	int res_my;

	res_my = ft_strncmp(s1_my, s2_my, n_my);
	printf("I'm your's:   %i\n", res_my);

	/*___TEST_CASE_2___*/
	const char *s1_std2 = "\0";
	const char *s2_std2 = "\0";
	int n_std2 = 4;
	int res_std2;

	printf("TEST_CASE_2:\n");
	res_std2 = strncmp(s1_std2, s2_std2, n_std2);
	printf("I'm standart: %i\n", res_std2);
	/*----------------------------------------------------------------------*/
	const char *s1_my2 = "\0";
	const char *s2_my2 = "\0";
	int n_my2 = 4;
	int res_my2;

	res_my2 = ft_strncmp(s1_my2, s2_my2, n_my2);
	printf("I'm your's:   %i\n", res_my2);

	return (0);
}


#include "libft.h"

int		main(void)
{

	/*----------------------------------------------------------------------*/
	const char *s1_my = "abc";
	const char *s2_my = "abcde";
	int n_my = 5;
	int res_my;
	int res_std;

	res_std = strncmp(s1_my, s2_my, n_my);
	printf("I'm standart: %i\n", res_std);
	res_my = ft_strncmp(s1_my, s2_my, n_my);
	printf("I'm your's:   %i\n", res_my);

	/*___TEST_CASE_2___*/
	// const char *s1_std2 = "\0";
	// const char *s2_std2 = "\0";
	// int n_std2 = 4;
	// int res_std2;

	// printf("TEST_CASE_2:\n");
	// res_std2 = strncmp(s1_std2, s2_std2, n_std2);
	// printf("I'm standart: %i\n", res_std2);
	// ----------------------------------------------------------------------
	// const char *s1_my2 = "\0";
	// const char *s2_my2 = "\0";
	// int n_my2 = 4;
	// int res_my2;

	// res_my2 = ft_strncmp(s1_my2, s2_my2, n_my2);
	// printf("I'm your's:   %i\n", res_my2);

	return (0);
}


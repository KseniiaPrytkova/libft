#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	/*the strings are identical*/
	char	*s1_std = "kaka";
	char	*s2_std = "kakas";
	size_t	n_std = 3;

	printf("TEST_CASE_1:\n");
	printf("I'm standart: %i\n", memcmp(s1_std, s2_std, n_std));
	/*----------------------------------------------------------------------*/
	char	*s1_my = "kakas";
	char	*s2_my = "kaka";
	size_t	n_my = 3;

	printf("I'm your's:   %i\n", ft_memcmp(s1_my, s2_my, n_my));

	/*___TEST_CASE_2___*/
	/*the strings are different*/
	char	*s1_std1 = "kakaskdjh";
	char	*s2_std1 = "kakasfsderrsaf";
	size_t	n_std1 = 7;

	printf("TEST_CASE_2:\n");
	printf("I'm standart: %i\n", memcmp(s1_std1, s2_std1, n_std1));
	/*----------------------------------------------------------------------*/
	char	*s1_my1 = "kakaskdjh";
	char	*s2_my1 = "kakasfsderrsaf";
	size_t	n_my1 = 7;

	printf("I'm your's:   %i\n", ft_memcmp(s1_my1, s2_my1, n_my1));

	/*___TEST_CASE_3___*/
	/*empty strings*/
	char	*s1_std2 = NULL;
	char	*s2_std2 = "kakasfsderrsaf";
	size_t	n_std2 = 7;

	printf("TEST_CASE_3:\n");
	printf("I'm standart: %i\n", memcmp(s1_std2, s2_std2, n_std2));
	/*----------------------------------------------------------------------*/
	char	*s1_my2 = NULL;
	char	*s2_my2 = "kakasfsderrsaf";
	size_t	n_my2 = 7;

	printf("I'm your's:   %i\n", ft_memcmp(s1_my2, s2_my2, n_my2));

	return (0);
}
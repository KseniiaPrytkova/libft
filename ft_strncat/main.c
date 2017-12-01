#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	char s1_std[8] = "kaka";
	char *s2_std = "pusdfhfdghfgf";
	size_t n_std = 10;
	char *s_final_std;

	s_final_std = strncat(s1_std, s2_std, n_std);
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %s\n", s_final_std);
	/*----------------------------------------------------------------------*/
	char s1_my[8] = "kaka";
	char *s2_my = "pusdfhfdghfgf";
	size_t n_my = 10;
	char *s_final_my;

	s_final_my = ft_strncat(s1_my, s2_my, n_my);
	printf("I'm your's:   %s\n", s_final_my);
	return (0);
}
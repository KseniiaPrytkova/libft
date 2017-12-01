#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	char s1_std[8] = "kaka";
	char *s2_std = "pus";
	char *s_final_std;

	s_final_std = strcat(s1_std, s2_std);
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %s\n", s_final_std);
	/*----------------------------------------------------------------------*/
	char s1_my[8] = "kaka";
	char *s2_my = "pus";
	char *s_final_my;

	s_final_my = strcat(s1_my, s2_my);
	printf("I'm your's:   %s\n", s_final_my);
	return (0);
}
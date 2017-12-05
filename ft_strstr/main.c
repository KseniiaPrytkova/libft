#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	char	*largerstring_std = "someoneontheroadis";
	char	*smallstring_std = "road";
	char	*ptr_std;

	ptr_std = strstr(largerstring_std, smallstring_std);
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %s\n",ptr_std);
	/*----------------------------------------------------------------------*/
	char	*largerstring_my = "someoneontheroadis";
	char	*smallstring_my = "road";
	char	*ptr_my;

	ptr_my = ft_strstr(largerstring_my, smallstring_my);
	printf("I'm your's:   %s\n",ptr_my);

	/*___TEST_CASE_2___*/
	char	*largerstring_std2;
	char	*smallstring_std2;
	char	*ptr_std2;

	ptr_std2 = strstr(largerstring_std2, smallstring_std2);
	printf("TEST_CASE_2:\n");
	printf("I'm standart: %s\n",ptr_std2);
	/*----------------------------------------------------------------------*/
	char	*largerstring_my2;
	char	*smallstring_my2;
	char	*ptr_my2;

	ptr_my2 = ft_strstr(largerstring_my2, smallstring_my2);
	printf("I'm your's:   %s\n",ptr_my2);

	/*___TEST_CASE_3___*/
	char	*largerstring_std3 = "someoneonthetoad";
	char	*smallstring_std3 = "wolf";
	char	*ptr_std3;

	ptr_std3 = strstr(largerstring_std3, smallstring_std3);
	printf("TEST_CASE_3:\n");
	printf("I'm standart: %s\n",ptr_std3);
	/*----------------------------------------------------------------------*/
	char	*largerstring_my3 = "someoneonthetoad";
	char	*smallstring_my3 = "wolf";
	char	*ptr_my3;

	ptr_my3 = ft_strstr(largerstring_my3, smallstring_my3);
	printf("I'm your's:   %s\n",ptr_my3);
	return (0);
}
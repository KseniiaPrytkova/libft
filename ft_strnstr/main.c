#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	char	*largerstring_std = "Foo Bar Baz okay haha";
	char	*smallstring_std = "okay";
	int		len_std = 0;
	char	*ptr_std;

	ptr_std = strnstr(largerstring_std, smallstring_std, len_std);
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %s\n",ptr_std);
	/*----------------------------------------------------------------------*/

	char	*ptr_my;

	ptr_my = ft_strnstr(largerstring_std, smallstring_std, len_std);
	printf("I'm your's:   %s\n",ptr_my);

	/*___TEST_CASE_2___*/
	char	*largerstring_std2 = "someoneonthetoad";
	char	*smallstring_std2;
	int		len_std2 = 10;
	char	*ptr_std2;

	ptr_std2 = strnstr(largerstring_std2, smallstring_std2, len_std2);
	printf("TEST_CASE_2:\n");
	printf("I'm standart: %s\n",ptr_std2);
	/*----------------------------------------------------------------------*/
	char	*largerstring_my2 = "someoneonthetoad";
	char	*smallstring_my2;
	int		len_my2 = 10;
	char	*ptr_my2;

	ptr_my2 = ft_strnstr(largerstring_my2, smallstring_my2, len_my2);
	printf("I'm your's:   %s\n",ptr_my2);

	/*___TEST_CASE_3___*/
	char	*largerstring_std3 = "someoneonthetoad";
	char	*smallstring_std3 = "wolf";
	int		len_std3 = 10;
	char	*ptr_std3;

	ptr_std3 = strnstr(largerstring_std3, smallstring_std3, len_std3);
	printf("TEST_CASE_3:\n");
	printf("I'm standart: %s\n",ptr_std3);
	/*----------------------------------------------------------------------*/
	char	*largerstring_my3 = "someoneonthetoad";
	char	*smallstring_my3 = "wolf";
	int		len_my3 = 10;
	char	*ptr_my3;

	ptr_my3 = ft_strnstr(largerstring_my3, smallstring_my3, len_my3);
	printf("I'm your's:   %s\n",ptr_my3);
	return (0);
}
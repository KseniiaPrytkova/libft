#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	/* The following sets chararray to ``abc\0\0\0'' */
	char dst_std[6];
	char *holder_std;

	holder_std = strncpy(dst_std, "abc", sizeof(dst_std));
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %s\n", holder_std);
	/*----------------------------------------------------------------------*/
	char dst_my[6];
	char *holder_my;

	holder_my = ft_strncpy(dst_my, "abc", sizeof(dst_my));
	printf("I'm your's:   %s\n", holder_my);

	/*___TEST_CASE_2___*/
	/*The following sets chararray to ``abcdef'': */
	char dst2_std[6];
	char *holder2_std;

	holder2_std = strncpy(dst2_std, "abcdefgh", sizeof(dst2_std));
	printf("TEST_CASE_2:\n");
	printf("I'm standart: %s\n", holder2_std);
	/*----------------------------------------------------------------------*/
	char dst2_my[6];
	char *holder2_my;

	holder2_my = ft_strncpy(dst2_my, "abcdefgh", sizeof(dst2_my));
	printf("I'm your's:   %s\n", holder2_my);

	/*___TEST_CASE_3___*/
	/*The following copies as many characters from input to buf as will fit and NUL terminates the
    result.  Because strncpy() does not guarantee to NUL terminate the string itself, this must be
    done explicitly.*/
	char dst3_std[10];
	char *holder3_std;

	holder3_std = strncpy(dst3_std, "abcdefg111156789", sizeof(dst3_std) - 1);
	dst3_std[sizeof(dst3_std) - 1] = '\0';
	printf("TEST_CASE_3:\n");
	printf("I'm standart: %s\n", holder3_std);
	/*----------------------------------------------------------------------*/
	char dst3_my[10];
	char *holder3_my;

	holder3_my = ft_strncpy(dst3_my, "abcdefg111156789", sizeof(dst3_my) - 1);
	dst3_my[sizeof(dst3_my) - 1] = '\0';
	printf("I'm your's:   %s\n", holder3_my);


	return (0);
}
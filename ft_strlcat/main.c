#include "libft.h"

int		main(void)
{

/*----------------------------------------------------------------------*/
	char dst_my[4] = "kaka";
	char *src_my = "pus";

	printf("I'm your's: %lu\n", ft_strlcat(dst_my, src_my, sizeof(dst_my)));
	printf("%s\n", dst_my);

	/*___TEST_CASE_1___*/
	char dst_std[4] = "kaka";
	char *src_std = "pus";

	printf("I'm standart: %lu\n", strlcat(dst_std, src_std, sizeof(dst_std)));
	printf("%s\n", dst_std);




	return (0);
}
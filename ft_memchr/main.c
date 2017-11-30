#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	char	*s_standart = "kapas";
	char	*holder_std;
	int		c_std = 'p';
	size_t	n_std = 3;

	holder_std = memchr(s_standart, c_std, n_std);
	printf("TEST_CASE_1:\n");
	printf("I'm standart: %s\n", holder_std);
	/*----------------------------------------------------------------------*/
	char	*s_my = "kapas";
	char	*holder_my;
	int		c_my = 'p';
	size_t	n_my = 3;

	holder_my = ft_memchr(s_my, c_my, n_my);
	printf("I'm your's:   %s\n", holder_my);

	return(0);
}
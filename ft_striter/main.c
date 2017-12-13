#include "libft.h"

void	change_the_letter(char *s)
{
	*s = 'f';
	
}

int		main(void)
{
	char array[5] = "kaka";
	ft_striter(array, &change_the_letter);
	printf("%s\n", array);

	return (0);
}
#include "libft.h"
#include <stdio.h>

void	ft_putchar(char c);

int		main()
{
	char c;
	c = 't';

	setvbuf(stdout, NULL, _IONBF, 0);
// Test 1
	putchar(c);
	putchar('=');
	ft_putchar(c);
	putchar('\n');

// Test 2
	int i = 0;

	while (i < 128)
	{
		putchar(i);
		putchar('=');
		ft_putchar(i);
		putchar('\n');
		i++;
	}
	return (0);
}
 

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str);

int main()
{
		char	n[40] = "-99999999999999999999999999";

	int		i1 = atoi(n);
	int		i2 = ft_atoi(n);
	printf("%i\n", i1);    
	printf("%i\n", i2);
    return (0);
}

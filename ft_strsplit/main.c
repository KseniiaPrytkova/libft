#include "libft.h"

int		main(void)
{
	char *s = "**some*fuck**students* ldfjgdlfjg**dkldkl****djcjkdh*";
	char c = '*';
	char **str_of_str;
	
	str_of_str = ft_strsplit(s, c);
	printf("%s\n", str_of_str[0]);
    printf("%s\n", str_of_str[1]);
    printf("%s\n", str_of_str[2]);
    printf("%s\n", str_of_str[3]);
    printf("%s\n", str_of_str[4]);
    printf("%s\n", str_of_str[5]);

	
	
	return (0);
}
#include "libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		if (*as != NULL)
		{
			free (*as);
			*as = NULL;
		}
	}

}
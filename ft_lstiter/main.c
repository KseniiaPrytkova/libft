#include "libft.h"

void	my_fn(t_list *element)
{
	printf("%s\n", element->content);
}

int		main(void)
{
	/*___TEST_CASE_1___*/
	t_list *element1;
	t_list *element2;

	element1 = ft_lstnew("kaka", 5);
	element2 = ft_lstnew("dadaspusss", 11);
	element1->next = element2;

	ft_lstiter(element1, &my_fn);

	return (0);
}
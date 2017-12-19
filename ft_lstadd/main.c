#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	t_list *add_this;
	t_list *element = NULL;

	add_this = ft_lstnew("kaka", 5);
	// element = ft_lstnew("dadaspusss", 11);
	printf("TEST_CASE_1:\n");
	// printf("before:  %s\n", element->content);

	ft_lstadd(&element, add_this);

	printf("after:   %s\n", element->content);

	return (0);
}
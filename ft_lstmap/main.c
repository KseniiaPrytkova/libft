#include "libft.h"

t_list *	my_fn(t_list *element)
{
	// element->content = "lol";
	
	return element;
}

int		main(void)
{
	/*___TEST_CASE_1___*/
	t_list *element1;
	t_list *element2;
	t_list *element3;

	t_list *result_list;

	element1 = ft_lstnew("kaka", 5);
	element2 = ft_lstnew("dadaspusss", 11);
	element3 = ft_lstnew("hhh", 4);
	element1->next = element2;
	element2->next = element3;

	result_list = ft_lstmap(element1, &my_fn);

	printf("%s\n", result_list->content);
	printf("%s\n", result_list->next->content);
	printf("%s\n", result_list->next->next->content);

	return (0);
}
#include "libft.h"

void del_el(void *some_content, size_t n)
{
	printf("%s FREEING ELEMENT: \n", (char *)some_content);
	free(some_content);
}

int 	main(void)
{

	/*___TEST_CASE_1___*/
	t_list *some = ft_lstnew("kakapus", 8);
	printf("TEST_CASE_1:\n");
	printf("%s\n", some->content);
	printf("%zu\n", some->content_size);

	ft_lstdelone(&some, del_el);

	printf("Should be null: %p \n", some);

	return (0);
}	
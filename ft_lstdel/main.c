#include "libft.h"

void del_el(void *some_content, size_t n)
{
	printf("FREEING ELEMENT: %s\n", (char *)some_content);
	free(some_content);
}

int 	main(void)
{

	/*___TEST_CASE_1___*/
	t_list *some = ft_lstnew("kakapus", 8);
	t_list *some1 = ft_lstnew("ka1a", 5);
	t_list *some2 = ft_lstnew("ka2a", 5);
	t_list *some3 = ft_lstnew("ka3a", 5);
	t_list *some4 = ft_lstnew("ka4a", 5);

	some->next = some1;
	some1->next = some2;
	some2->next = some3;
	some3->next = some4;

	printf("TEST_CASE_1:\n");
	printf("%s\n", some->content);
	printf("%zu\n", some->content_size);
	
	ft_lstdel(&some, del_el);
	printf("Should be 0x0:  %p\n", some);

	return (0);
}	
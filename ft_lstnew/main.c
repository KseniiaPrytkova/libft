#include "libft.h"

int 	main(void)
{

	/*___TEST_CASE_1___*/
	t_list *some = ft_lstnew("kakapus", 8);
	printf("TEST_CASE_1:\n");
	printf("%s\n", some->content);
	printf("%zu\n", some->content_size);

	/*___TEST_CASE_2___*/
	t_list *some_2 = ft_lstnew(NULL, 8);
	printf("TEST_CASE_2:\n");
	printf("%s\n", some_2->content);
	printf("%zu\n", some_2->content_size);

	/*___TEST_CASE_3___*/
	t_list *some_3 = ft_lstnew(NULL, 0);
	printf("TEST_CASE_3:\n");
	printf("%s\n", some_3->content);
	printf("%zu\n", some_3->content_size);

	/*___TEST_CASE_4___*/
	t_list *some_4 = ft_lstnew("kakapus", 0);
	printf("TEST_CASE_4:\n");
	printf("%s\n", some_4->content);
	printf("%zu\n", some_4->content_size);

	/*___TEST_CASE_5___*/
	t_list *some_5 = ft_lstnew("", 0);
	printf("TEST_CASE_5:\n");
	printf("%s\n", some_5->content);
	printf("%zu\n", some_5->content_size);

	/*___TEST_CASE_6___*/
	// t_list *some_6 = ft_lstnew("kakapus", -5);
	// printf("TEST_CASE_6:\n");
	// printf("%s\n", some_6->content);
	// printf("%zu\n", some_6->content_size);
	return (0);
}
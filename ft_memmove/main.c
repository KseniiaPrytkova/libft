#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	// source < destination
	char some[] = "12345678";
	char *src;
	char *dst;	
	size_t len = 5;

	src = some;
	dst = some + 3;
	printf("TEST_CASE_1: source < destination\n");
	printf("SRC_INPUT:%s\n", src);
	printf("DST_INPUT:%s\n", dst);
	// memmove(dst, src, len);
	// printf("Standart_function:\n");
	// printf("SRC_OUTPUT:%s\n", src);
	// printf("DST_OUTPUT:%s\n", dst);
	ft_memmove(dst, src, len);
	printf("My_function:\n");
	printf("SRC_OUTPUT:%s\n", src);
	printf("DST_OUTPUT:%s\n", dst);	

	/*___TEST_CASE_2___*/
	// source > destination
	char some_2[] = "12345678";
	char *src_2;
	char *dst_2;	
	size_t len_2 = 5;

	src_2 = some_2 + 3;
	dst_2 = some_2;

	printf("TEST_CASE_2: source > destination\n");
	printf("SRC_INPUT:%s\n", src_2);
	printf("DST_INPUT:%s\n", dst_2);
	// memmove(dst_2, src_2, len_2);
	// printf("Standart_function:\n");
	// printf("SRC_OUTPUT:%s\n", src_2);
	// printf("DST_OUTPUT:%s\n", dst_2);
	ft_memmove(dst_2, src_2, len_2);
	printf("My_function:\n");
	printf("SRC_OUTPUT:%s\n", src_2);
	printf("DST_OUTPUT:%s\n", dst_2);

	/*___TEST_CASE_3___*/
	// source = destination
	char some_3[] = "12345678";
	char *src_3;
	char *dst_3;	
	size_t len_3 = 5;

	src_3 = some_3 + 3;
	dst_3 = some_3 + 3;

	printf("TEST_CASE_3: source = destination\n");
	printf("SRC_INPUT:%s\n", src_3);
	printf("DST_INPUT:%s\n", dst_3);
	// memmove(dst_3, src_3, len_3);
	// printf("Standart_function:\n");
	// printf("SRC_OUTPUT:%s\n", src_3);
	// printf("DST_OUTPUT:%s\n", dst_3);
	ft_memmove(dst_3, src_3, len_3);
	printf("My_function:\n");
	printf("SRC_OUTPUT:%s\n", src_3);
	printf("DST_OUTPUT:%s\n", dst_3);		
	return 0;
}
#include "libft.h"

int main(void)
{
	/*___TEST_CASE_1___*/
	printf("TEST_CASE_1:\n");

	// char *src_standart = "1234567";
	char *src_my = "abcdefg";
	// char dst_standart[6];
	char dst_my[6];

	// memcpy(dst_standart, src_standart, 6);
	// printf("%s\n", dst_standart);

	ft_memcpy(dst_my, src_my, 6);
	printf("%s\n", dst_my);

	/*___TEST_CASE_UNIVERSAL___*/
	char *a = memcpy(dst_my, src_my, 6);

	printf("-----------------\n");
	for (int i = 0; i < 10; i++)
	{
		printf("iteration %d: %c\n", i, a[i]);
		printf("\n");
	}

	/*___TEST_CASE_2___*/
	printf("TEST_CASE_2: dst < src\n");
	// char *src_std_2 = "abcdefg";
	// char dst_std_2[10];
	// memcpy(dst_std_2, src_std_2, 11);
	// printf("%s\n", dst_std_2);

	char *src_my_2 = "abcdefg";
	char dst_my_2[10];
	memcpy(dst_my_2, src_my_2, -1);
	printf("%s\n", dst_my_2);

	/*___TEST_CASE_2___*/
	printf("TEST_CASE_3: NULL\n");

	// char *src_std_null = NULL;
	// char dst_std_null[10];
	// memcpy(dst_std_null , src_std_null, 8);
	// printf("%s\n", dst_std_null);

	char *src_my_null = NULL;
	char dst_my_null[10];
	memcpy(dst_my_null, src_my_null, 8);
	printf("%s\n", dst_my_null);

	return (0);
}
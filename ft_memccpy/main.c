#include "libft.h"

int		main(void)
{
	/*___TEST_CASE_1___*/
	char *src_std = "kkkaka";
	char dst_std[8];
	char *result;
	int c = 'a';
	size_t n = 6;

	printf("TEST_CASE_1:\n");
	result = memccpy(dst_std, src_std, c, n);
	printf("%s\n", dst_std);
	printf("%s\n", result);
	// -----------------------------------------------
	char *src_my = "kkkaka";
	char dst_my[8];
	char *result_my;
	int c_my = 'a';
	size_t n_my = 6;

	printf("TEST_CASE_1_1:\n");
	result = ft_memccpy(dst_my, src_my, c_my, n_my);
	printf("%s\n", dst_my);
	printf("%s\n", result_my);

	/*___TEST_CASE_2___*/
	char *src_std_2 = "kkkaka";
	char dst_std_2[8];
	char *result_2;
	int c_2 = 'a';
	size_t n_2;

	n_2 = ft_strlen(src_std_2);
	// printf("%zu\n", n2);
	printf("TEST_CASE_2:\n");
	result_2 = memccpy(dst_std_2, src_std_2, c_2, n_2);
	printf("%s\n", dst_std_2);
	printf("%s\n", result_2);
	// -----------------------------------------------
	char *src_my_2 = "kkkaka";
	char dst_my_2[8];
	char *result_my_2;
	int c_my_2 = 'a';
	size_t n_my_2;

	n_my_2 = ft_strlen(src_my_2);
	// printf("%zu\n", n2);
	printf("TEST_CASE_2_2:\n");
	result_my_2 = ft_memccpy(dst_my_2, src_my_2, c_my_2, n_my_2);
	printf("%s\n", dst_my_2);
	printf("%s\n", result_my_2);

	/*___TEST_CASE_3___*/
	// the character n doesn't occur in the srs
	char *src_std_3 = "kkkaka";
	char dst_std_3[8];
	char *result_3;
	int c_3 = 'q';
	size_t n_3;

	n_3 = ft_strlen(src_std_3);
	// printf("%zu\n", n2);
	printf("TEST_CASE_3:\n");
	result_3 = memccpy(dst_std_3, src_std_3, c_3, n_3);
	printf("%s\n", dst_std_3);
	printf("%s\n", result_3);
	// -----------------------------------------------
	char *src_my_3 = "kkkaka";
	char dst_my_3[8];
	char *result_my_3;
	int c_my_3 = 'q';
	size_t n_my_3;

	n_my_3 = ft_strlen(src_my_3);
	// printf("%zu\n", n2);
	printf("TEST_CASE_3_3:\n");
	result_my_3 = memccpy(dst_my_3, src_my_3, c_my_3, n_my_3);
	printf("%s\n", dst_my_3);
	printf("%s\n", result_my_3);
	return (0);
}

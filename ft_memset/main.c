#include "libft.h"

#define BFSIZE 5

void	test_memory(void *ptr1, void *ptr2, int test_number, int should_free)
{
	if (!memcmp(ptr1, ptr2, BFSIZE))
		printf("TEST_CASE_%d: PASSED!\n", test_number);					
	else
		printf("TEST_CASE_%d: FAILED!\n", test_number);

	if (should_free)
	{
		free(ptr1);
		free(ptr2);
	}
}

int		main (void)
{
	char test_standart[] = "kakaka";
	char test_my[] = "kakaka";

	char *a = memset(test_standart, 'A', 3);
	char *b = ft_memset(test_my, 'A', 3);

/*___TEST_CASE_1___*/

/* функция принимает указатель, и она может данные по этому адресу перезаписать; тут проверяем перезаписанные данные */
	// printf("TEST_CASE_1:\n"); /*check what the fn overwrites by the original address of the first argument*/	
	// printf("standart:%s\n", test_standart);
	// printf("      my:%s\n", test_my);
	test_memory(&test_standart, &test_my, 1, 0);

/*___TEST_CASE_2___*/

/* функция должна вернуть указатель на какие-то данные или NULL; тут выводим данные по указателю(должны совпадать) */
/* *a будет содержать адрес на test_my, *b содержит адрес на test_standart; функция memset возвращает адрес первого агрумента */
	// printf("TEST_CASE_2:\n"); we check which result data is contained in addresses a and b

	// printf ("standart: %s\n", a);
	// printf ("      my: %s\n", b);

	test_memory(a, b, 1, 0);

/*___TEST_CASE_3___*/

	char	*b1 = (char*)malloc(sizeof(char) * (BFSIZE + 1));
	char	*b2 = (char*)malloc(sizeof(char) * (BFSIZE + 1));

	*b1 = 0;
	*b2 = 0;
	memset(b1, 'A', BFSIZE);
	ft_memset(b2, 'A', BFSIZE);

	test_memory(b1, b2, 3, 1);

/*___TEST_CASE_4___*/
/* передаем на вход числовой массив */	

	int test_standart_int[] = {1, 2, 3, 4, 5, 6};
	int test_my_int[] = {1, 2, 3, 4, 5, 6};

	int *int_standart = memset(test_standart_int, '_', 3);
	int *int_my = memset(test_my_int, '_', 3);
	// printf("TEST_CASE_4:\n");
	// printf("standart_int:%s\n", (char *)int_standart);
	// printf("      my_int:%s\n", (char *)int_my);

	test_memory(int_standart, int_my, 4, 0);

/*___TEST_CASE_5___*/
	// char *overcrowded_arr_standart = memset(test_standart, '_', 30);
	// char *overcrowded_arr_my = ft_memset(test_my, '_', 30);
	// test_memory(overcrowded_arr_standart, overcrowded_arr_my, 5, 0);
	// printf("TEST_CASE_5:\n");

	// printf ("overcrowded_standart:%s\n", overcrowded_arr_standart);
	// printf ("overcrowded_my: %s\n", overcrowded_arr_my);

/*___TEST_CASE_6___*/

/* проверка на segmentation fault */
	// char test_standart_1[26] = "kakaka";

	// char *check_null_standart = memset(test_standart_1, '_', 3);
	// printf("TEST_CASE_6:\n");
	// printf ("first arg of standart fn is not NULL:%s\n", check_null_standart);

	// char *check_null_my = ft_memset(NULL, '_', 3);
	// printf ("%s\n", check_null_my);
// /* ---------------------------choose what to comment------------------------------------- */
	char test_my_1[26] = "kakaka";
	char *check_null_my = memset(test_my_1, '_', 3);
	printf("TEST_CASE_6:\n");
	printf ("first arg of my fn is not NULL:%s\n", check_null_my);

	char *check_null_standart = ft_memset(NULL, '_', 3);
	printf ("%s\n", check_null_standart);

	return (0);
}

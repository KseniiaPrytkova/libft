#include "libft.h"
#define BFSIZE 5

void	ft_bzero(void *s, size_t n);

void test_memory(void *ptr1, void *ptr2, int test_number, int should_free) {
	if (!memcmp(ptr1, ptr2, BFSIZE))
		{
			printf("TEST_CASE_%d: PASSED!\n", test_number);					
		} else {
			printf("TEST_CASE_%d: FAILED!\n", test_number);
		}
	if (should_free) {
		free(ptr1);
		free(ptr2);
	}
}

int		main(void)
{
	char test_standart[] = "kakaka";
	char test_my[] = "kakaka";


/*___TEST_CASE_1___*/
	bzero(test_standart, 0);
	ft_bzero(test_my, 0);
	test_memory(&test_standart, &test_my, 1, 0);

	
/*___TEST_CASE_2___*/
	bzero(&test_standart, 3);
	int n = 0;
	while (n < 5)
	{
		printf("%c\n", test_standart[n]);
		n++;
	}

	ft_bzero(test_my, 3);
	printf("%c\n", test_my[3]);

	test_memory(&test_standart, &test_my, 2, 0);

/*___TEST_CASE_3___*/
	bzero(test_standart, BFSIZE + 5);
	ft_bzero(test_my, BFSIZE + 5);
	test_memory(&test_standart, &test_my, 3, 0);

/*___TEST_CASE_4___________ CRASH__________<*/
	// char *nullStandart = NULL;
	// char *nullmy = NULL;

	// bzero(nullStandart, BFSIZE);
	// ft_bzero(nullmy, BFSIZE);
	// test_memory(nullStandart, nullmy, 4, 0);

/*___TEST_CASE_5___*/
	char print_standart[] = "123456789";
	char print_my[] = "123456789";
	int counter = 0;

	bzero(print_standart, BFSIZE);
	ft_bzero(print_my, BFSIZE);

	while (counter <= 9) {
		printf("%c",print_standart[counter]);
		counter++;
	}
	printf("\n");
	counter = 0;
		while (counter <= 9) {
		printf("%c",print_my[counter]);
		counter++;
	}


	return (0);
}
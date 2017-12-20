#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long number;
	int div_remainder;
	char result_char;

	number = n;

	if (n < 0)
	{
		write(fd, "-", 1);
		number = number * (-1);
	}

	if (number / 10 > 0) 
	{
		ft_putnbr_fd(number / 10, fd);
	}
	div_remainder = number % 10;
	result_char = div_remainder + '0';

	write (fd, &result_char, 1);

}
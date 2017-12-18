/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprytkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 23:25:12 by kprytkov          #+#    #+#             */
/*   Updated: 2017/09/26 19:24:52 by kprytkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_skit_spaces(char *str)
{
	while (*str == ' ')
	{
		str++;
	}
	return (str);
}

char	*ft_check_minus(char *str, int *minus)
{
	if (*str == '-')
	{
		str++;
		*minus = -1;
	}
	return (str);
}

int		ft_atoi(char *str)
{
	int sum;
	int check_minus;

	str = ft_skit_spaces(str);
	check_minus = 1;
	sum = 0;
	str = ft_check_minus(str, &check_minus);
	while (*str != '\0' && *str != ' ')
	{
		if (*str >= '0' && *str <= '9')
		{
			sum = sum * 10 + (*str - '0');
			str++;
		}
		else
		{
			break ;
		}
	}
	return (sum * check_minus);
}
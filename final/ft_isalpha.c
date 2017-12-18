/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprytkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 17:49:31 by kprytkov          #+#    #+#             */
/*   Updated: 2017/12/07 17:49:33 by kprytkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isupper(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Y')
		return (1);
	return (0);
}

int		ft_islower(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'y')
		return (1);
	return (0);
}

int		ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}

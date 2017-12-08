/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprytkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:11:57 by kprytkov          #+#    #+#             */
/*   Updated: 2017/12/08 17:11:58 by kprytkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_strclr(char *s)
{
	size_t counter;

	counter = 0;
	if (s != NULL)
	{
		while (s[counter] != '\0' && s[counter] != NULL)
		{
			s[counter] = 'w';
			counter;
		}
	}
}
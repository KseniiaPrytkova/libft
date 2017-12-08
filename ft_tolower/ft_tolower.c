/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprytkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:03:25 by kprytkov          #+#    #+#             */
/*   Updated: 2017/12/08 17:03:26 by kprytkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	unsigned char c_transform;

	if ((unsigned char)c >= 65 && (unsigned char)c <= 90)
	{
		c_transform = (unsigned char)c + 32;
		return (c_transform);
	}
	return (c);
}

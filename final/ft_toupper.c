/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprytkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:44:19 by kprytkov          #+#    #+#             */
/*   Updated: 2017/12/08 16:44:20 by kprytkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char c_transform;

	if ((unsigned char)c >= 97 && (unsigned char)c <= 122)
	{
		c_transform = (unsigned char)c - 32;
		return (c_transform);
	}
	return (c);
}

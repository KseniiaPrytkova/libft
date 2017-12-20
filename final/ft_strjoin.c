/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprytkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 19:42:50 by kprytkov          #+#    #+#             */
/*   Updated: 2017/12/20 19:42:53 by kprytkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result_string;

	s1_len = 0;
	s2_len = 0;
	result_string = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
		result_string = malloc(sizeof(char) * (s1_len + s2_len + 1));
		if (result_string)
		{
			ft_strcpy(result_string, s1);
			ft_strcpy((result_string + s1_len), s2);
			result_string = result_string + (s1_len + s2_len);
			*result_string = '\0';
		}
		else
			return (NULL);
	}
	return (result_string - (s1_len + s2_len));
}

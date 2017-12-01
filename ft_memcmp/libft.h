/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprytkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 16:48:29 by kprytkov          #+#    #+#             */
/*   Updated: 2017/11/22 16:48:30 by kprytkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
void 	*ft_memcpy(void *dst, const void *src, size_t n);
void 	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void 	*ft_memmove(void *dst, const void *src, size_t len);
char 	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char 	*ft_strncpy(char *dst, const char *src, size_t len);
void 	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif

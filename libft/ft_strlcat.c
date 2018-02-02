/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouzgao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:34:00 by ybouzgao          #+#    #+#             */
/*   Updated: 2017/11/11 15:53:10 by ybouzgao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s1_end;
	int		j;

	i = 0;
	j = 0;
	if (size == 0)
	{
		size++;
		j++;
	}
	while (dst[i] && i < size)
		i++;
	s1_end = i;
	while (src[i - s1_end] && i < size - 1)
	{
		dst[i] = src[i - s1_end];
		i++;
	}
	if (s1_end < size)
		dst[i] = '\0';
	if (j == 1)
		return (s1_end + ft_strlen((char *)src) - 1);
	else
		return (s1_end + ft_strlen((char *)src));
}

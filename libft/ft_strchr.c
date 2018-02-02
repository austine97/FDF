/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouzgao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:28:04 by ybouzgao          #+#    #+#             */
/*   Updated: 2017/11/09 17:23:21 by ybouzgao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	int			j;
	char		*s1;

	j = 0;
	i = 0;
	s1 = (char *)s;
	while (s1[i])
	{
		if (s1[i] == c)
			return (&s1[i]);
		i++;
	}
	if (!s1[i] && c == '\0')
		return (&s1[i]);
	return (NULL);
}

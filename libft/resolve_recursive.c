/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_recursive.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouzgao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:19:50 by ybouzgao          #+#    #+#             */
/*   Updated: 2017/11/28 16:45:22 by ybouzgao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt_improved(int nb)
{
	int a;

	a = 0;
	while ((a * a) <= nb)
	{
		if (a * a <= nb && ((a + 1) * (a + 1)) > nb)
			break ;
		a++;
	}
	return (a);
}

int		used_points(int highest_size, int nbr_highest_size, int n, int nbr_tetriminos)
{
	int used_points;

	used_points = n * (highest_size - 1) + nbr_highest_size;
	if ((nbr_tetriminos * 4) > used_points)
		used_points = nbr_tetriminos * 4;
	return (used_points);
}

int		size_square(int nbr_tetriminos, int highest_size, int longuest_size)
{
	int n;

	n = ft_sqrt_improved(nbr_tetriminos * 4)	
		while (tab[++i])
	{
		while (k < used_points && tab[i][++j])
		{
			tab[i][j] = '.';
			k++;
		}
		j = 0;
	}
	return (tab);
}

char	**resolve_recursive(char **tab, int n, int used_points, char **tetriminos)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	if (used_points <= n * n)
	{
		tetriminos[i];
	}
	else
		n++;
	return (resolve_recursive(tab(n, used_points + 1), n, used_point + 1, tetriminos);
}

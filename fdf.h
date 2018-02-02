/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 00:50:31 by dhorvill          #+#    #+#             */
/*   Updated: 2018/02/02 18:58:46 by ybouzgao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDF_H
#define FT_FDF_H

typedef struct	s_misc
{
	void	*mlx;
	void	*win;
	int		a;
	int		b;
	int		c;
	int		d;
	float		e;
	float		n;
	float		p;
	int		fd;
	char	*str;
}				t_misc;

int ft_draw_line2(int nbr, int next_nbr, int x0, int y0, int x1, int y1, void *mlx, void *win);
int exitt(int keycode, t_misc *s);
t_misc find_initial_coord(t_misc *s);
int	connect_dots(int new_num, int fd, int dist, float x, float y, void *mlx, void *win);
int	ft_color(int height, int next_height, int savenbr);

#endif

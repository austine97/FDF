/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouzgao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 19:20:53 by ybouzgao          #+#    #+#             */
/*   Updated: 2018/02/02 20:31:21 by ybouzgao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fdf.h"
#include <math.h>
#include <stdio.h>
#include <unistd.h>

int		ft_color(int height, int next_height, int savenbr)
{
	 int x;
	
	if (savenbr < next_height)
	{
		x = abs(0x00FF0000 + (height + next_height) * 2000);
		printf("HEGHT = %d , NEXT_HEIGHT = %d , SAVENBR = %d , X = %d \n",height,next_height,savenbr,x);
	//	usleep(100000);
	}
	else if (savenbr > next_height)
	{
		x = abs(0x00FFFFFF - (height + next_height) * 1000);
	//	printf("HEGHT = %d , NEXT_HEIGHT = %d , SAVENBR = %d , X = %d \n",height,next_height,savenbr,x);
	//	usleep(100000);
	}
	else
		x = 0x00FF0000;
	return (x);
}

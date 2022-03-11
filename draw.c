/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:43:23 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/03/11 20:43:24 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_draw_asseste(t_assests info, char type, int x, int y)
{
	int	w;
	int	h;

	w = x * SIZE;
	h = y * SIZE;
	if (type == '1')
		draw_wall(info, w, h);
	if (type == 'P')
		draw_player(info, w, h);
	if (type == 'C')
		draw_collect(info, w, h);
	if (type == '0')
		draw_ground(info, w, h);
	if (type == 'E')
		draw_exit(info, w, h);
}

void	ft_draw_map(t_assests info, char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	mlx_clear_window(info.m.mlx_ptr, info.m.win_ptr);
	while (map[y])
	{
		while (map[y][x] && map[y][x] != '\n')
		{
			ft_draw_asseste(info, map[y][x], x, y);
			x++;
		}
		x = 0;
		y++;
	}
}

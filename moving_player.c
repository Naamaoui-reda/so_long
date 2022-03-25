/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:20:14 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/03/25 12:20:15 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int	player_move(char **map, t_map *p, int move)
{
	int	curr_x;
	int	curr_y;
	int	hit_wall;

	curr_x = p->player.p_x;
	curr_y = p->player.p_y;
	hit_wall = ft_hit_wall(map, p, move);
	if (hit_wall == 1)
		return (0);
	else if (hit_wall == 2)
		return (1);
	p->player.p_x += ft_right_left(move);
	p->player.p_y += ft_up_down(move);
	map[curr_y][curr_x] = '0';
	map[p->player.p_y][p->player.p_x] = 'P';
	printf("moves : %d\n", ++(((*p).player).moves));
	return (0);
}

static int	key_hook(int keycode, void *param)
{
	t_map	*data;

	data = (t_map *)param;
	if (keycode == ESC)
	{
		ft_free_everything(data);
		exit(0);
	}
	if (keycode != ESC && keycode != W && keycode != A && keycode != S
		&& keycode != D)
		return (1);
	if (player_move(data->map, data, keycode) == 1)
		ft_free_everything(data);
	return (0);
}

void	movement(t_map *map)
{
	mlx_hook (map->assests.m.win_ptr, 2, 1L << 0, key_hook, map);
	mlx_hook (map->assests.m.win_ptr, 17, 1L << 0, ft_free_everything, map);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:43:30 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/03/11 20:43:32 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	draw_ground(t_assests info, int x, int y)
{
	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.groud, x, y);
}

void	draw_wall(t_assests info, int x, int y)
{
	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.wall, x, y);
}

void	draw_player(t_assests info, int x, int y)
{
	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.groud, x, y);
	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.player, x, y);
}

void	draw_collect(t_assests info, int x, int y)
{
	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.groud, x, y);
	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.collect, x, y);
    
}

void	draw_exit(t_assests info, int x, int y)
{
	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.exit, x, y);
}

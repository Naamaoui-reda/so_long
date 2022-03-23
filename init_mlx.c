/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:44:08 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/03/11 20:44:09 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	init_mlx(t_mlx *m, int size_x, int size_y, char *name)
{
    if (size_x <= 0 || size_y <= 0 || name == NULL || *name == '\0')
		return (1);
	m->mlx_ptr = mlx_init ();
	if (m->mlx_ptr == NULL)
		return (1);
	m->win_ptr = mlx_new_window (m->mlx_ptr, size_x, size_y, name);
	if (m->win_ptr == NULL)
	{
		free(m->mlx_ptr);
		return (1);
	}
	return (0);
}

void	init_assests(t_assests *info)
{
	int		x;
	int		y;
	void	*mlx_ptr;

	mlx_ptr = (info->m).mlx_ptr;
	info->collect = mlx_xpm_file_to_image(mlx_ptr, "./xpm/coll.xpm", &x, &y);
	info->groud = mlx_xpm_file_to_image(mlx_ptr, "./xpm/back.xpm", &x, &y);
	info->player = mlx_xpm_file_to_image(mlx_ptr, "./xpm/player.xpm", &x, &y);
	info->wall = mlx_xpm_file_to_image(mlx_ptr, "./xpm/wall.xpm", &x, &y);
	info->exit = mlx_xpm_file_to_image(mlx_ptr, "./xpm/exit.xpm", &x, &y);
}

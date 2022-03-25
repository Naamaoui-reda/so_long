/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:44:15 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/03/11 20:44:16 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	loop_hook(void *param)
{
	t_map	*map;

	map = (t_map *)param;
	ft_draw_map(map->assests, map->map);
	return (0);
}

int	main(int ac, char **av)
{
	int		fd;
	t_map	map;
	t_mlx	*tmp;

	fd = open(av[1], O_RDONLY);
	map.map = ft_read(fd);
	if (map.map == NULL)
		return (1);
	init_vars(&map);
	ft_check(map.map, &map);
	tmp = &(map.assests.m);
	if (init_mlx(tmp, map.size_of_map_v * SIZE,
			map.size_of_map_h * SIZE, "so_long"))
	{
		ft_free_everything(&map);
		exit (1);
	}
	init_assests(&map.assests);
	ft_draw_map(map.assests, map.map);
	movement(&map);
	mlx_loop_hook(map.assests.m.mlx_ptr, loop_hook, &map);
	mlx_loop(map.assests.m.mlx_ptr);
}

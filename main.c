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

// int key_hook(int keycode, void *param)
// {
//     t_data  *data;
//     t_mlx   *m;
//     t_assests   *p;

//     data = (t_data *)param;
//     m = &(p->m);
//     p = &(data->a);
//     if (keycode == ESC)
//         exit (0);//to do free map
//     else if (keycode == W)
//     {
//         mlx_clear_window(m->mlx_ptr,m->win_ptr);
//         p->p_y = p->p_y - 108;
//         mlx_put_image_to_window(m->mlx_ptr,m->win_ptr,p->player,p->p_x,p->p_y);
//     }
//     else if (keycode == A)
//     {
//         mlx_clear_window(m->mlx_ptr,m->win_ptr);
//         p->p_x = p->p_x - 92;
//         mlx_put_image_to_window(m->mlx_ptr,m->win_ptr,p->player,p->p_x,p->p_y);
//     }
//     else if (keycode == S)
//     {
//         mlx_clear_window(m->mlx_ptr,m->win_ptr);
//         p->p_y = p->p_y + 108;
//          mlx_put_image_to_window(m->mlx_ptr,m->win_ptr,p->player,p->p_x,p->p_y);
//     }
//     else if (keycode == D){
//         mlx_clear_window(m->mlx_ptr,m->win_ptr);
//         p->p_x = p->p_x + 92;
//          mlx_put_image_to_window(m->mlx_ptr,m->win_ptr,p->player,p->p_x,p->p_y);
//     }
//     return (0);
// }
int	loop_hook(void *param)
{
	t_map	*map;

	map = (t_map *)param;
	ft_draw_map(map->assests,map->map);
	return (0);
}

int main()
{
	//int x;
	//int y;
	int fd;
	t_map   map;
	
	map.collectible  = 0;
	map.size_of_map_h = 0;
	map.size_of_map_v = 0;
	map.player.p_x = 0;
	map.player.p_y = 0;
	map.collectible = 0;
	map.size_of_map_h = 0;
	map.size_of_map_v=0;
	//t_assests info;
	//int *t;

	fd = open("map.ber",O_RDONLY);
	map.map = ft_read(fd);
	if (map.map == NULL)
		return (1);
	ft_check(map.map,&map);
	//t = print_map(s);
	t_mlx   *tmp;
	tmp = &(map.assests.m);
	puts("here");
	if(init_mlx(tmp,map.size_of_map_v * SIZE,map.size_of_map_h * SIZE,"so_long"))
		exit(0); // to_do free map
	printf ("init a\n");
	init_assests(&map.assests);
	printf ("init d\n");
	ft_draw_map(map.assests, map.map);
	puts("here");
	movement(&map);
	mlx_loop_hook(map.assests.m.mlx_ptr,loop_hook, &map);
	mlx_loop (map.assests.m.mlx_ptr);
	
} 

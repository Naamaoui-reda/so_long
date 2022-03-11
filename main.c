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

int main()
{
	//int x;
	//int y;
	int fd;
	char **s;
	t_mlx mlx_struct;
	t_assests data;
	t_map   ta;
	
	ta.collectible  = 0;
	ta.size_of_map_h = 0;
	ta.size_of_map_v = 0;
	ta.position.x = 0;
	ta.position.y = 0;
	ta.collectible = 0;
	ta.size_of_map_h = 0;
	ta.size_of_map_v=0;
	t_assests info;
	int *t;

	fd = open("map.ber",O_RDONLY);
	s = ft_read(fd);
	if (s == NULL)
		return (1);
	
	ft_check(s,&ta);
	t = print_map(s);
	if(init_mlx(&mlx_struct, ta.size_of_map_v*SIZE,ta.size_of_map_h*SIZE,"test"))
		exit(0); // to_do free map
	 data.m= mlx_struct;
	printf ("init a\n");
	init_assests(&data);
//    mlx_key_hook (mlx_struct.win_ptr, key_hook, &data);
	   printf ("init d\n");
	ft_draw_map(data, s);
	mlx_loop (mlx_struct.mlx_ptr);
	
} 

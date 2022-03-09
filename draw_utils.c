#include "main.h"
void    draw_ground(t_assests info, int x, int y)
{
	mlx_put_image_to_window(info.data.mlx_ptr, info.data.win_ptr, info.groud, x, y);
}
void	draw_wall(t_assests info,int x, int y)
{
	mlx_put_image_to_window(info.data.mlx_ptr, info.data.win_ptr, info.wall, x, y);
}
void	draw_player(t_assests info,int x, int y)
{
	mlx_put_image_to_window(info.data.mlx_ptr, info.data.win_ptr, info.groud, x, y);
	mlx_put_image_to_window(info.data.mlx_ptr, info.data.win_ptr, info.player, x, y);
}
void	draw_collect(t_assests info,int x, int y)
{
	mlx_put_image_to_window(info.data.mlx_ptr, info.data.win_ptr, info.groud, x, y);
	mlx_put_image_to_window(info.data.mlx_ptr, info.data.win_ptr, info.collect, x, y);
}
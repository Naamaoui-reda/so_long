#include "main.h"
void    draw_ground(t_assests info, int x, int y)
{
		puts("here gr");

	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.groud, x, y);
}
void	draw_wall(t_assests info,int x, int y)
{
	puts("here wall");
	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.wall, x, y);
}
void	draw_player(t_assests info,int x, int y)
{
		puts("here pl");

	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.groud, x, y);
	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.player, x, y);
}
void	draw_collect(t_assests info,int x, int y)
{
		puts("here cl");

	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.groud, x, y);
	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.collect, x, y);
}
void	draw_exit(t_assests info,int x, int y)
{
		puts("here ex");

	mlx_put_image_to_window(info.m.mlx_ptr, info.m.win_ptr, info.exit, x, y);
}
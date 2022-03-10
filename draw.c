#include "main.h"

<<<<<<< HEAD
void    ft_draw_asseste(t_assests info,char type, int x, int y)
{
    int w;
    int h;

    w = x * SIZE;
    h = y * SIZE;
    if (type == '1')
        draw_wall(info,w,h);
    if (type == 'P')
        draw_player(info,w,h);
    if (type == 'C')
        draw_collect(info,w,h);
    if (type == '0')
        draw_ground(info,w,h);
    if (type == 'E')
        draw_exit(info,w,h);
}
void    ft_draw_map(t_assests info, char **map)
{
    int x;
    int y;
    
    print_map(map);
    x = 0;
    y = 0;
    mlx_clear_window(info.m.mlx_ptr,info.m.win_ptr);
    printf ("here\n");
    while(map[y])
    {
        while (map[y][x] && map[y][x] != '\n')
        {
            ft_draw_asseste(info,map[y][x],x,y);
            x++;
        }
        x = 0;
        y++;
    }
    printf ("there\n");

=======
void    ft_draw_map(t_assests *info, t_mlx )
{
	
>>>>>>> 1856018cf2e0da4aa091a689b20a8000ac9ceeef
}
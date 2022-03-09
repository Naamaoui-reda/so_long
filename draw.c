#include "main.h"

void    ft_draw_asseste(t_assests info,char **map, int x, int y)
{
    int w;
    int h;

    w = x * SIZE;
    h = y * SIZE;
    if (map[y][x] == '1')
        draw_wall(info,w,h);
    if (map[y][x] == 'P')
        draw_player(info,w,h);
    if (map[y][x] == 'C')
        draw_collect(info,w,h);
    if (map[y][x] == '0')
        draw_ground(info,w,h);
    if (map[y][x] == 'E')
        draw_exit(info,w,h);
}
void    ft_draw_map(t_assests info,char **map)
{
    int x;
    int y;
    
    x = 0;
    y = 0;
    mlx_clear_window(info.data.mlx_ptr,info.data.win_ptr);
    while(map[y])
    {
        while (map[y][x] && map[y][x] != '\n')
        {
            ft_draw_asseste(info,map,x,y);
            x++;
        }
        x = 0;
        y++;
    }
}
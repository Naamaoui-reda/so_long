#include "main.h"

int	ft_hit_wall(char **map, t_map *p, int move)
{
	int	x;
	int	y;

	x = p->player.p_x+ ft_right_left(move);
	y = p->player.p_y + ft_up_down(move);
	if (map[y][x] == 'E')
	{
		if (p->collectible == 0)
		{
			write (1, "win",3);
			return (2);
		}
		return (1);
	}
	if (map[y][x] == '1')
		return (1);
	if (map[])
}
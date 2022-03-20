#include "main.h"

int	ft_up_down(int move)
{
	if (move == W)
		return (-1);
	if (move == S)
		return (1);
	return (0);
}

int	ft_right_left(int move)
{
	if (move == A)
		return (-1);
	if (move == D)
		return (1);
	return (0);
}

static int	player_move(char **map, t_player *p, int move, int *collect)
{
	int	curr_x;
	int	curr_y;
	int	hit_wall;
	
}
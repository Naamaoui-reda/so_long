#include "main.h"

int    init_mlx(t_mlx *m, int size_x, int size_y, char *name)
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
int	init_assests(t_assests info)
{
	
}
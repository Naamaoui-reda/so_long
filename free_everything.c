#include "main.h"

void	ft_destroy_images(t_map	map)
{
	t_assests	tmp_as;
	char		**tmp_map;

	tmp_map = map.map;
	tmp_as = map.assests;

	mlx_destroy_image(tmp_as.m.mlx_ptr,tmp_as.player);
	mlx_destroy_image(tmp_as.m.mlx_ptr,tmp_as.wall);
	mlx_destroy_image(tmp_as.m.mlx_ptr,tmp_as.exit);
	mlx_destroy_image(tmp_as.m.mlx_ptr,tmp_as.groud);
	mlx_destroy_image(tmp_as.m.mlx_ptr,tmp_as.collect);
	free(tmp_as.m.mlx_ptr);
	while (map.size_of_map_h--)
		free(map.map[map.size_of_map_h]);
	free (tmp_map);
	exit (1);

}

int	ft_free_everything(t_map *map)
{
	ft_destroy_images(*map);
	return (1);
}
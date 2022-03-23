/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:44:22 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/03/11 20:44:23 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define  MAIN_H

# include  <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <mlx.h>
# include <fcntl.h>
# include <stdbool.h>
# include "./libft/libft.h"

# define ESC 53
# define W  13
# define A 0
# define S 1
# define D 2
# define SIZE 30
//add bool for exit

typedef void*	t_mlx_win;
typedef void*	t_img;

typedef struct s_mlx
{
	void		*mlx_ptr;
	t_mlx_win	win_ptr;
}t_mlx;

typedef struct s_player
{
	int		p_x;
	int		p_y;
    int     moves;
}t_player;

typedef struct s_assests
{
	t_img	player;
	t_img	exit;
	t_img	groud;
	t_img	wall;
	t_img	collect;
	t_mlx	m;
    t_player    s_player;
}t_assests;

typedef struct s_data
{
	t_assests	a;
}t_data;

typedef struct s_map
{
    char    **map;
	int		collectible;
	int		size_of_map_v;
	int		size_of_map_h;
	t_player	player;
	bool	ex;
    t_assests   assests;
}t_map;

/********* UTILS *****************************/
void	perror_exit(unsigned int err);
char	*get_next_line(int fd);
char	**ft_realloc(char **tab, size_t new_size);
int		ft_tab_size(char **tab);
void	ft_check_player(char **tab, t_map *ma);
void	ft_check_for_outsiders(char **tab);
void	init_position(t_map *map, int i, int j, char **tab);
/******** MAP ***********************/
char	**ft_read(int fd);
size_t	ft_strlen_map(char *s);
void	ft_check_lines_of_map(char **tab);
void	ft_check_borders(char **tab);
void	ft_check(char **tab, t_map *t);
void	free_map(char **tab);
void	write_err_lent(char **tab, int i);
void	check_type(char c, t_map *ma);
/************   DRAW	*************/
void	draw_ground(t_assests info, int x, int y);
void	draw_wall(t_assests info, int x, int y);
void	draw_player(t_assests info, int x, int y);
void	draw_collect(t_assests info, int x, int y);
void	draw_exit(t_assests info, int x, int y);
void	ft_draw_asseste(t_assests info, char type, int x, int y);
void	ft_draw_map(t_assests info, char **map);
void	init_assests(t_assests *info);
/************ MLX ****************************/
int		init_mlx(t_mlx *m, int size_x, int size_y, char *name);

/************ move ****************************/
int	ft_right_left(int move);
int	ft_up_down(int move);
int	ft_hit_wall(char **map, t_map *p, int move);
void	ft_destroy_images(t_map	map);
int	ft_free_everything(t_map *map);
void movement(t_map *map);
#endif

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<math.h>
#include<mlx.h>
#include<fcntl.h>
#include<stdbool.h>
#include "./libft/libft.h"

#define ESC 53
#define W  13
#define A 0
#define S 1
#define D 2
//add bool for exit
typedef void* mlx;
typedef void* mlx_win;
typedef void* img;

typedef struct s_mlx
{
    mlx mlx_ptr;
    mlx_win win_ptr;

}t_mlx;

typedef struct s_assests
{
    img player;
    int p_x;
    int p_y;

}t_assests;

typedef struct s_data
{
    t_mlx m;
    t_assests a;

}t_data;
typedef struct s_point
{
    int x;
    int y;
}t_point;


typedef struct s_map
{
    int collectible;
    int size_of_map_v;
    int size_of_map_h;
    t_point position;
    bool ex;
}t_map;

/********* UTILS *****************************/
void    perror_exit(unsigned int err);
char	*get_next_line(int fd);
char    **ft_realloc(char **tab, size_t new_size);
int	    ft_tab_size(char **tab);
void	ft_check_player(char **tab,t_map *ma);
void	ft_check_for_outsiders(char **tab);
/******** MAP ***********************/
void    print_map(char **tab);
char    **ft_read(int fd);
size_t  ft_strlen_map(char *s);
void	ft_check_lines_of_map(char **tab);
void	ft_check_borders(char **tab);
void  ft_check(char **tab,t_map *t);
void    free_map(char **tab);

/************ MLX ****************************/
int    init_mlx(t_mlx *m, int size_x, int size_y, char *name);
#endif
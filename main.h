#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<math.h>
#include<mlx.h>
#include<fcntl.h>
#include "./libft/libft.h"

#define ESC 53
#define W  13
#define A 0
#define S 1
#define D 2
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



/********* UTILS *****************************/
void    perror_exit(unsigned int err);
char	*get_next_line(int fd);
char    **ft_realloc(char **tab, size_t new_size);
void    print_map(char **tab);
char    **ft_read(int fd);
size_t  ft_strlen_map(char *s);
/************ MLX ****************************/
int    init_mlx(t_mlx *m, int size_x, int size_y, char *name);
#endif
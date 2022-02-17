#include "main.h"

int key_hook(int keycode, void *param)
{
    t_data  *data;
    t_mlx   *m;
    t_assests   *p;

    data = (t_data *)param;
    m = &(data->m);
    p = &(data->a);
    if (keycode == ESC)
        exit (0);//to do free map
    else if (keycode == W)
    {
        mlx_clear_window(m->mlx_ptr,m->win_ptr);
        p->p_y = p->p_y - 108;
        mlx_put_image_to_window(m->mlx_ptr,m->win_ptr,p->player,p->p_x,p->p_y);
    }
    else if (keycode == A)
    {
        mlx_clear_window(m->mlx_ptr,m->win_ptr);
        p->p_x = p->p_x - 92;
        mlx_put_image_to_window(m->mlx_ptr,m->win_ptr,p->player,p->p_x,p->p_y);
    }
    else if (keycode == S)
    {
        mlx_clear_window(m->mlx_ptr,m->win_ptr);
        p->p_y = p->p_y + 108;
         mlx_put_image_to_window(m->mlx_ptr,m->win_ptr,p->player,p->p_x,p->p_y);
    }
    else if (keycode == D){
        mlx_clear_window(m->mlx_ptr,m->win_ptr);
        p->p_x = p->p_x + 92;
         mlx_put_image_to_window(m->mlx_ptr,m->win_ptr,p->player,p->p_x,p->p_y);
    }
    return (0);
}

int main()
{
    int x;
    int y;
    int fd;
    char **s;
    t_mlx mlx_struct;
    t_data data;
    
   

    fd = open("map.ber",O_RDONLY);
    s = ft_read(fd);
    if (s == NULL)
        return (1);
    print_map(s);
    printf ("%c\n", s[3][6]);
    // s = get_next_line(fd);
    // printf("%s\n",s);
//     if(init_mlx(&mlx_struct, 1024, 1024,"test"))
//         exit(0); // to_do free map
//     data.m = mlx_struct;
//     data.a.player = mlx_xpm_file_to_image(mlx_struct.mlx_ptr, "free-1x.xpm", &x, &y);
//     data.a.p_x=x;
//     data.a.p_y=y;
//    mlx_key_hook (mlx_struct.win_ptr, key_hook, &data); printf("%d--%d\n",x,y);
//     mlx_put_image_to_window(mlx_struct.mlx_ptr,mlx_struct.win_ptr,data.a.player,data.a.p_x,data.a.p_y);
//     mlx_loop (mlx_struct.mlx_ptr);
    
}
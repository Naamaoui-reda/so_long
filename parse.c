#include "main.h"

char **ft_read(int fd)
{
    char    **tab;
    int     i;

    if (fd < 0)
        perror_exit(1);
    i = 0;
    tab = (char **)malloc(sizeof (char*));
    if (!tab)
    {
        perror("Allocation failed");
        exit (1);
    }
    while (1337)
    {
        tab [i] = get_next_line(fd);
        if (tab[i++] == NULL)
            return (tab);
        tab = ft_realloc(tab, i + 1);
    }
    return (NULL);
}

// void    ft_check(char **tab)
// {

// }
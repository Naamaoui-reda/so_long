#include"main.h"

void perror_exit(unsigned int err)
{
    perror("Error");
    exit(err);
}
void    **ft_realloc(void **tab, size_t new_size)
{
    void    **new_tab;

    new_tab = (void *)malloc (sizeof(void *) * (new_size + 1));
    if (!new_tab)
    {
        perror("Error");
        exit (1);
    }
    ft_memcpy(new_tab,tab,new_size);
    free (tab);
    return(new_tab);
}


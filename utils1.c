#include"main.h"

void perror_exit(unsigned int err)
{
	perror("Error");
	exit(err);
}
char    **ft_realloc(char **tab, size_t new_size)
{
	char    **new_tab;

	if (tab == NULL || new_size < 0)
		return (NULL);
	new_tab = (char **)malloc (sizeof(char *) * (new_size));
	if (!new_tab)
	{
		perror("Error");
		exit (1);
	}
	ft_memcpy(new_tab, tab, new_size * sizeof(char *));
	free (tab);
	return (new_tab);
}

void    print_map(char **tab)
{
	int i=0;
	while (tab[i])
	{
		printf("%s",tab[i++]);
	}
}

void    free_map(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		free (tab[i++]);
	}
	free(tab);
}


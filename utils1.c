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

int	ft_check_lines_of_map(char **tab)
{
	int	i;
	int	size;

	i = 1;
	size = ft_strlen_map(tab[0]);
	while (tab[i])
	{
		if (size != ft_strlen_map(tab[i++]))
		{
			write(1, "Erroe\n", 6);
			exit(1);
		}
		i++;
	}
	return(0);
}

int	ft_check_borers(char **tab)
{
	
}
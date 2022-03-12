/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:44:38 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/03/11 20:44:39 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"main.h"

void	perror_exit(unsigned int err)
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

int    *print_map(char **tab)
{
	int i=0;
	int *t = NULL;
	t = malloc(2 * sizeof(int));
	while (tab[i])
		printf("%s",tab[i++]);
	t[0] = ft_strlen_map(tab[0]);
	t[1] = i;
	return (t);
}

void    free_map(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		free (tab[i++]);
	free(tab);
}

int	ft_tab_size(char **tab)
{
	int	i;

	i = 0;
	while(tab[i])
		i++;
	return (i);
}

void	ft_check_for_outsiders(char **tab)
{
	int i;
	int j;

	i = 0;

	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j]!= 'P' && tab[i][j]!= 'E' && tab[i][j]!= 'C'
				&& tab[i][j]!= '1' && tab[i][j] != '0' && tab[i][j] != '\n')
			{
				write(2, "Error:\nMap Invalid there is an outsider",39);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	write_err_lent(char **tab, int i)
{
	if (i == 1)
	{
		write (2, "lent error\n",11);
		free_map (tab);
		exit (1);
	}
	if (i == 2)
	{
		write (2, "Error\n", 6);
		write (2, "borders-Erroe\n", 14);
		free_map(tab);
		exit(1);
	}
	if (i == 3)
	{
        write (2, "Error\n", 6);
		write(2, "the map need one player and one player only\n", 44);
        free_map(tab);
		exit(1);
	}

}

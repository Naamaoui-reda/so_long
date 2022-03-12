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

char	**ft_realloc(char **tab, size_t new_size)
{
	char	**new_tab;

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

void	free_map(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free (tab[i++]);
	free (tab);
}

int	ft_tab_size(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_check_for_outsiders(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] != 'P' && tab[i][j] != 'E' && tab[i][j] != 'C'
				&& tab[i][j] != '1' && tab[i][j] != '0' && tab[i][j] != '\n')
			{
				write(2, "Error:\nMap Invalid there is an outsider", 39);
				exit(1);
			}
			j++;
		}
		i++;
	}
}
